#include <cstddef>

#ifndef DICE_SIM_H // ifndef means "if not defined"
#define DICE_SIM_H

void resetArray(size_t[],size_t);
void rollNTimes(size_t[],size_t, size_t);
void printReport(size_t[],size_t, size_t);
int randRange(int, int);

#endif