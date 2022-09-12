#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
	protected:
		char recentMove;
		int numMoves;
	public:
		Player();
        // pure virtual function
		virtual void move() = 0;
		virtual std::string getMoves() = 0;
		char getMove();
		bool win(Player* opponent);
		~Player();
};
#endif