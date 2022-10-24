#include "hunter.h"
#include <string>

using namespace std;

int hunter::nextID = 1000;

hunter::hunter(string n, int v):animal(n, v) {
    animalID = hunter::nextID++;
}

string hunter::get_name() {
    string result = "Hunter: " + name;
    return result;
}

void hunter::set_kills(int new_k) {
    kills = new_k;
}

int hunter::get_kills() {
    return kills;
}