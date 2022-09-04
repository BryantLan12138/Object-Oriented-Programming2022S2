#include<string>
#include "Musician.h"

using namespace std;

// a constructor that takes the instrument played and the years of experience
Musician::Musician(string instrument, int experience): _instrument(instrument),_experience(experience){};      

Musician::Musician(): Musician("",0){};                  // a default constructor 


string Musician::get_instrument(){return _instrument;}    // returns the instrument played
int Musician::get_experience(){return _experience;}       // returns the number of years experience