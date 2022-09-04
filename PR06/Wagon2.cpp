
#include <iostream>
#include "Wagon2.h"

Wagon::Wagon()
{
    numCapys = 0;
}
bool Wagon::addCapybara(Capybara newCapy)
{
    if (numCapys >= 4)
    {
        return false;
    }
    capys[numCapys++] = newCapy;
    return true;
}
void Wagon::emptyWagon()
{
    numCapys = 0;
}
void Wagon::printCapybaras()
{
    for (int i=0; i<numCapys; i++)
    {
        std::cout << capys[i].getName() << " " << capys[i].getAge() << std::endl;
    }
}