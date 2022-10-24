#include <string>
#include "animal.h"
#pragma once

using namespace std;

class hunter : public animal {
    public:
        hunter(string n, int v);  // create a hunter with name n and body volume v
        void set_kills(int new_k);
        int get_kills();
        string get_name();
    private:
        int kills = 0;               // how many kills have been recorded, initialised to 0
        static int nextID;
};