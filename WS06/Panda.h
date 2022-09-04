#ifndef PANDA_H
#define PANDA_H

#include <string>

// Class definition for a Panda
class Panda
{
public:
	Panda();
	Panda(std::string pname, std::string pfav_food);
	std::string name;
	std::string species;
	std::string type;
	std::string fav_food;
	void treat(int fav_food_quantity);		
	~Panda();
};
#endif //PANDA_H
