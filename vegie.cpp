#include "vegie.h"
#include <string>

using namespace std;

int vegie::nextID = 100;

vegie::vegie(string n, int v):animal(n, v) {
    animalID = vegie::nextID++;
    favourite_food = "grass";
}

string vegie::get_name() {
    string result = "Safe: " + name;
    return result;
}

void vegie::set_favourite_food(string new_f) {
    favourite_food = new_f;
}

string vegie::get_favourite_food() {
    return favourite_food;
}