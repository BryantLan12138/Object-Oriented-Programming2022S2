#include "Person.h"
#include <iostream>

using namespace std;

Person::Person() {
    moves = new char(100);
}

void Person::move() {
    cout << "What is your move?" << endl;
    cin >> recentMove;
    moves[numMoves] = recentMove;
    numMoves++;
}

string Person::getMoves() {
    return moves;
}

Person::~Person() {
    if(moves != nullptr) {
        delete [] moves;
    }
}