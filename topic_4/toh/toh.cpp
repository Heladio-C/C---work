#include <iostream>
#include <iomanip>
#include "toh.h"


void moveDisk(size_t disk, char from , char to)
{
    static size_t count {1};
    std::cout << std::setw(5) << std::left << count++ << " " << "Move disk " << disk 
              << " from peg " << from 
              << " to peg" << to << std::endl;
}

void moveStack(size_t diskQty, char from , char to , char temp)
{
    if(diskQty == 1){
        moveDisk(diskQty, from, to);
        return;
    }

    moveStack(diskQty - 1, from, temp, to);
    moveDisk(diskQty, from, to);
    moveStack(diskQty - 1, temp, to, from);

    

}