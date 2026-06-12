#include "game.h"
#include "ui.h"

static size_t userPos{COLS};

void run() {

    Move m;
    while(true){
        printEnviron(userPos, ROWS, COLS, USER_SYMBOL);

        m = chartToMove(getMove("Enter Move (wasd): "));

        if(validMove(m)) {
            makeMove(m);
        }
        
        else {
            printMsg("Invalid Move!\n");
            
        }





        
    }
    
    

}


void start() {

    run();
}

Move chartToMove(char m)
{
    switch(tolower(m)) {
        case 'a': return LEFT;
        case 'd': return RIGHT;
        case 'w': return UP;
        case 's': return DOWN;
        default: return INVALID;
    }
    return Move();
}

bool validMove(Move m) {
    return m != INVALID;
}
void makeMove(Move m) {

    switch(m) {
        case UP: 
            userPos -= COLS; 
            break;
        case DOWN:  
            userPos += COLS; 
            break;
        case LEFT:
            --userPos;
            break;
        case RIGHT:
            ++userPos; 
            break;
        default: break;
    }
    
}