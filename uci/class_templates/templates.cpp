template <typename T> 

T remove(int index){

    rangeCheck(index);


    if (index == 0){
        return remove();
    } 
    else{
        T removedElement = container[index];
        container.erase(container.begin() + index);
        return removedElement;

    }
}