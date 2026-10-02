#include <iostream> 
#include <iomanip> 
#include <fstream> 
#include <chrono> 
 
using namespace std; 
 
//classic selection sort algorithm bigO(N^2) 
void selectionSort(int array[], int size){ 
 
    for(int i = 0; i < size - 1; i++){ 
        int minIndex = i; 
        for(int j = i + 1; j < size; j++){ 
            if(array[j] < array[minIndex]){ 
                minIndex = j; 
            } 
        } 
        if(minIndex != i){ 
            int temp = array[minIndex]; 
            array[minIndex] = array[i]; 
            array[i] = temp; 
        } 
    } 
 
} 


//merge two sorted halves algorithm (for mergeSort)
void merge(int array[], int left, int mid, int right, int temp[]){

    int i = left;
    int j = mid + 1;
    int k = left;

    while(i <= mid && j <= right){
        if(array[i] <= array[j]){
            temp[k++] = array[i++];
        } else {
            temp[k++] = array[j++];
        }
    }
    while(i <= mid)   temp[k++] = array[i++];
    while(j <= right) temp[k++] = array[j++];

    for(int idx = left; idx <= right; idx++){
        array[idx] = temp[idx];
    }

}


//merge sort algorithm bigO(N log N)
void mergeSort(int array[], int left, int right, int tempArray[] = nullptr){

    bool topLevel = (tempArray == nullptr);
    if(topLevel){
        tempArray = new int[right + 1];
    }

    if(left < right){
        int mid = left + (right - left) / 2;
        mergeSort(array, left, mid, tempArray);
        mergeSort(array, mid + 1, right, tempArray);
        merge(array, left, mid, right, tempArray);
    }

    if(topLevel){
        delete[] tempArray;
    }

}

  
void runSortTest(const string& filename, int size) { 
  
    int* raw = new int[size]; 
    int* sortedSel = new int[size]; 
    int* sortedMerge = new int[size];
  
    ifstream inFile(filename); 
  
    if (!inFile) { 
        cout << "couldn't open file: " << filename << endl; 
        delete[] raw; 
        delete[] sortedSel; 
        delete[] sortedMerge;
        return; 
    } 
  
    //read file and place data into both sort arrays
    for (int i = 0; i < size; i++) { 
        inFile >> raw[i]; 
        sortedSel[i] = raw[i]; 
        sortedMerge[i] = raw[i];
    } 
    inFile.close(); 
  
    //time selection sort
    auto startSel = chrono::high_resolution_clock::now(); 
    selectionSort(sortedSel, size); 
    auto endSel = chrono::high_resolution_clock::now(); 
    double timeSel = chrono::duration<double, milli>(endSel - startSel).count();

    //time merge sort
    auto startMerge = chrono::high_resolution_clock::now();
    mergeSort(sortedMerge, 0, size - 1);
    auto endMerge = chrono::high_resolution_clock::now();
    double timeMerge = chrono::duration<double, milli>(endMerge - startMerge).count();
  
    // output 
    cout << "Sorting file:        " << filename << endl; 
    cout << "Number of values:    " << size << endl; 
 
    cout << "First 5 (unsorted): "; 
    for (int i = 0; i < 5; i++) { 
        cout << setw(7) << raw[i]; 
    } 
    cout << endl; 
  
    cout << "Last 5 (unsorted):  "; 
    for (int i = size - 5; i < size; i++){ 
        cout << setw(7) << raw[i]; 
    }  
    cout << endl; 
  
    cout << "First 5 (sorted):   "; 
    for (int i = 0; i < 5; i++){ 
        cout << setw(7) << sortedSel[i]; 
    }  
    cout << endl; 
  
    cout << "Last 5 (sorted):    "; 
    for (int i = size - 5; i < size; i++){ 
        cout << setw(7) << sortedSel[i]; 
    }  
    cout << endl; 
  
    cout << fixed << setprecision(3);
    cout << "Selection sort time: " << timeSel << " ms" << endl;
    cout << "Merge sort time:     " << timeMerge << " ms" << endl;
    cout.unsetf(ios::fixed);
  
    delete[] raw; 
    delete[] sortedSel; 
    delete[] sortedMerge;
} 
 
 
int main() { 
 
    runSortTest("medium10k.txt", 10000); 
    cout << endl; 
    runSortTest("medium50k.txt", 50000); 
    
    return 0; 
}