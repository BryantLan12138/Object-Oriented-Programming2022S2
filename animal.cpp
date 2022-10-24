#include "animal.h"
#include <string>

using namespace std;

animal::animal(string n, int v) {
    name = n;
    volume = v;
}
int animal::get_animalID() {
    return animalID;
}

int animal::get_volume() {
    return volume;
}

void animal::set_volume(int new_v) {
    volume = new_v;
}

void animal::set_name(string new_n) {
    name = new_n;
}