#include <iostream>
#include "Panda.h"

using namespace std;

// implementation of the default Panda constructor
Panda::Panda()
{
	name = "?";
	species = "panda";
	type = "herbivore";
	fav_food ="bambooooo";
}

// implementation of a Panda constructor taking a name and food type
Panda::Panda(string pname, string pfav_food)
{
	name = pname;
	species = "panda";
	fav_food = pfav_food;
}

// implementation of the Panda treat function
void Panda::treat(int fav_food_quantity)
{
	cout << "Hi, I'm " << name << " and I'm a " << species ;
	cout << ", munching " << fav_food_quantity << " tons of " ;
	cout << fav_food << ", my favorite food!" << endl;
}		

// implementation of the default Panda destructor
Panda::~Panda()
{
}
