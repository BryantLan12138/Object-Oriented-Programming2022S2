
#include "Capybara.h"
#include <iostream>
#include <string>
using namespace std;

// implementation of Capybara constructor
Capybara::Capybara(){}

// implementation of setName function
void Capybara::setName(string capyName){
    this->_Name = capyName;
}

// implementation of getName function
string Capybara::getName(){return this->_Name;}

// implementation of setAge function
void Capybara::setAge(int capyAge){
    this->_Age = capyAge;
}

// implementation of getAge function
int Capybara::getAge(){return this->_Age;}