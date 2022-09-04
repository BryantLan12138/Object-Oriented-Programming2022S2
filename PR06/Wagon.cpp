
#include "Wagon.h"
// #include "Capybara.h"
#include <string>
#include <iostream>
using namespace std;

// implementation of Wagon constructor
Wagon::Wagon(){
    // set seat count to zero (empty Wagon)
    this->_count = 0;
};

// implementation of addCapybara function
// adds a Capybara to the wagon, returns false if full (4 seats)
bool Wagon::addCapybara(Capybara newCapy){
    if (this->_count >= 4){
        
        return false; // successfully added
    }
    
        //cout << "Error: full wagon\n";
        capys[this->_count] = newCapy;
        this->_count ++; // increment seat count
        return true; // full wagon
    
}

// implementation of emptyWagon function
void Wagon::emptyWagon(){
    this->_count = 0;
}

// implementation of printCapybaras function
void Wagon::printCapybaras(){
    for (int i = 0; i < this->_count; i++){
        cout << capys[i].getName() << " " << capys[i].getAge() << endl;
    }
}