
#ifndef WAGON_H
#define WAGON_H
#include "Capybara.h"

class Wagon
{
    Capybara capys[4];
    int numCapys;
public:
    Wagon();                               // create an empty wagonobject
    bool addCapybara(Capybara newCapy);    // adds a capybara to the wagon, returns false if full
    void emptyWagon();                     // remove all capybaras from the wagon
    void printCapybaras();                 // print the name, a space, the age, then a new line
                                           // for each capybara in the order they were added
};
#endif