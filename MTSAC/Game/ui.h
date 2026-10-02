#include <cstddef>
#include <string>
#ifndef UI_H
#define UI_H

void printEnviron(size_t, size_t , size_t, char );
void printLine(size_t);
void printRow(size_t, size_t, bool, char);
char getMove(const std::string&);
void printMsg(const std::string&);


#endif // UI_H