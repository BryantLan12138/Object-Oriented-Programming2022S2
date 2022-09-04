#include "Airplane.h"
#include <string>
#include <iostream>
using namespace std;

// implementation of Airplane constructor
Airplane::Airplane(){};
Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot){
    this->_callSign = callsign;
    this->_pilot = thePilot;
    this->_coPilot = theCoPilot;
}

// implementation of setPilot function
void Airplane::setPilot(Person thePilot){
    this->_pilot = thePilot;
}

// imiplementation of getPilot function
Person Airplane::getPilot(){return this->_pilot;}

// implementation of setCoPilot function
void Airplane::setCoPilot(Person theCoPilot){
    this->_coPilot = theCoPilot;
}

// implementation of getCoPilot function
Person Airplane::getCoPilot(){return this->_coPilot;}

// implementation  of printDatails function
void Airplane::printDetails(){
    cout << this->_callSign << endl;
    cout << _pilot.getName() << endl; // NOTE cout << this->_pilot doesn't work because pilot is a Person object, can't call an object directly, need to use it's attibutes/behaviours
    cout << _coPilot.getName() << endl;
}