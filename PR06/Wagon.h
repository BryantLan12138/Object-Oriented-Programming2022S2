#ifndef WAGON_H
#define WAGON_H

#include "Capybara.h"

class Wagon{
    private:
        int _count;
        Capybara capys[4];
    public:
        Wagon();
        bool addCapybara(Capybara);
        void emptyWagon();
        void printCapybaras();
};

#endif