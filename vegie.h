#include <string>
#include "animal.h"
#pragma once
using namespace std;

class vegie: public animal {
    public:
        vegie(string n,int v);      // create a vegie with name n and body volume v
        string get_favourite_food();
        void set_favourite_food(string new_f);
        string get_name();
    private:
        string favourite_food;     // the vegie's favourite food, initialise to "grass"
        static int nextID;
};