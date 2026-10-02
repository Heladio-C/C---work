#include "ui.h"
#include <iostream>

void printEnviron(size_t userPos, size_t rows, size_t columns, char symbol){

    size_t userRow {userPos / columns};
    size_t userCol {userPos % columns};

    for(size_t row = 0; row < rows; row++) {
        printLine(columns);

        printRow(columns, userCol, row == userRow, symbol);
    }
    printLine(columns);
}

void printLine(size_t cols) {
    for(size_t i = 0; i < cols; i++) {
        std::cout << "----";
    }
    std::cout << "-\n";
}

void printRow(size_t cols, size_t userCol, bool userRow, char symbol) {
    for(size_t i = 0; i < cols; i++) {
        std::cout << "|  " 
        << (userRow && i == userCol ? symbol : ' ')
        << "  ";
    }
    std::cout << "|\n";
}

char getMove(const std::string& prompt) {
    char m;
    std::cout << prompt;
    std::cin >> m;
    return m;
}

void printMsg(const std::string& msg){
    std::cout << msg << std::endl;
}
