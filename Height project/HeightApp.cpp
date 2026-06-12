#include <iostream>
#include "height.h"

using namespace std;


int main(){
    //create some height objects
    Height h1;
    Height h2(5);

    Height h3(5,8);
    Height h4(-1, 5);
    Height h5(6, 15);

    //new test case
    Height h6(0, 5);

    cout << "h6: ";
    h6.print();
    cout << endl;

    //testing increments 
    h6.increment(12);
    h6.increment(-3);

    //test stantard increment
    h6.increment();

    //tesing new increment
    h6.increment(10);

    //output total inches
    cout << "Total inches: " << h6.totalInches() << endl;

    cout << "h6: ";
    h6.print();
    cout << endl;

    //test operator function
    if(h3 == h6){
        cout << "h3 is the same as h6" << endl;
    } else {
        cout << "h3 is not the same as h6" << endl;
    }

    cout << endl;

    //EXTRA CREDIT TESTS
    cout << "Testing new Extra Credit Test Cases: " << endl;
    h6 = Height(1, 4);

    Height h7 = h3 + h6;
    Height h8 = h3 - h6;
    Height h9 = h6 - h3;

    cout << "h7: ";
    h7.print();
    cout << endl;

    cout << "h8: ";
    h8.print(); 
    cout << endl;

    cout << "h9: ";
    h9.print();
    cout << endl;

    cout << "End of Extra Creidt Test Cases" << endl << endl;

    h6 = Height(0,5);




    //PREVIOIUS VERSION CODE
    //SetUp Array
    Height heightArray[5] = {h1, h2, h3, h4, h5};

    // loop through array to print out contents
    for(int i = 0; i < 5; i++){
        cout << "h" << i + 1 << ": ";
        heightArray[i].print();
        cout << endl;
    }

    cout << endl;

    //perform various operations
    //height object h3
    h3.setFeet(-2);
    h3.setInches(10);
    cout << "feet: " << h3.getFeet() << ", inches: " << h3.getInches() << endl;

    // height object h4
    h4.setFeet(6);
    h4.setInches(12);
    cout << "feet: " << h4.getFeet() << ", inches: " << h4.getInches() << endl;

    //height object h5
    h5.setInches(10);
    h5.increment();
    h5.increment();
    cout << "h5: ";
    h5.print();
    cout << endl;

    return 0;
}