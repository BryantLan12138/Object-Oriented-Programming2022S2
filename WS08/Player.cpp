#include <iostream>
#include "Player.h"

using namespace std;

Player::Player() {
  recentMove = ' ';
  numMoves = 0;
}

char Player::getMove() { 
    return recentMove; 
}

bool Player::win(Player* opponent) {
    char recent = recentMove;
    char op = opponent->getMove();

    if((recent == 'r' && op == 's') || (recent == 's' && op == 'p') || (recent == 'p' && op == 'r')) {
        return true;
    } 

    return false;
}

Player::~Player() {}