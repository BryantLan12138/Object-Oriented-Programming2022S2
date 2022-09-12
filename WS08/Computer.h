#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include "Player.h"

// inheritence happens here
class Computer : public Player
{   
    private:
        char* moves;

    public:
        Computer();
        void move();
        std::string getMoves();
        ~Computer();
};

#endif