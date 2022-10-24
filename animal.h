#include <string>
using namespace std;
#pragma once

class animal {
    public:
        animal(string n, int v) ;  // creates an animal with name n and body volume v.
                                // animals are allocated a unique ID on creation
        virtual string get_name() = 0;
        int get_volume();
        int get_animalID();
        void set_volume(int new_v);
        void set_name(string new_n);
    protected:
        string name ;              // the animal's name
        int animalID ;             // the animal's unique ID
        int volume ;               // the volume of the animal's body
};