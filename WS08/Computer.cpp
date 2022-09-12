#include "Computer.h"
#include <iostream>
#include <time.h>

using namespace std;

Computer::Computer() {
    moves = new char(100);
}

void Computer::move() {
    srand (time(NULL));
    int random = (rand() % 3) + 1;

    switch(random) {
        case 1:
            recentMove = 'r';
            break;
        case 2:
            recentMove = 's';
            break;
        case 3:
            recentMove = 'p';
            break;
    }

    moves[numMoves] = recentMove;
    numMoves++;
}

string Computer::getMoves() {
    return moves;
}

Computer::~Computer() {
    if(moves != nullptr) {
        delete [] moves;
    }
}