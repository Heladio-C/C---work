#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#include "dice_sim.h"

void rollNTimes(size_t array[],size_t count, size_t sampleSize)
{
    srand(time(0));
    resetArray(array,count);
    for (size_t i = 0; i < sampleSize; ++i)
        ++array[randRange(0, 5) ];
    
}
void printReport(size_t array[],size_t count, size_t sampleSize)
{
    std::cout << "Sample Size: " << sampleSize << std::endl;
    std::cout << "Faces:     1       2        3       4        5      6\n";
    std::cout << "-----------------------------------------------------\n";
    std::cout << "      ";

    for(size_t i=0;i<count;++i)
        std::cout << std:: setw(8) << static_cast<double>(array[i]) / sampleSize * 100;
    
    std::cout << std::endl;
}

int randRange(int start, int end)
{

    return rand() % (end - start + 1) + start;
}

void resetArray(size_t array[], size_t count)
{
    for(size_t i=0;i<count;++i) 
        array[i]=0;
}

