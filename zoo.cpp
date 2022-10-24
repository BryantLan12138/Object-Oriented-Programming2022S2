#include <string>
#include "zoo.h"
#include "vegie.h"
#include "hunter.h"

using namespace std;

zoo::zoo(string n,int cows,int lions) {
    name = n;
    number_of_animals = cows + lions;
    animals = new animal*[number_of_animals];
    for (int i = 0; i < cows; i++) {
        animals[i] = new vegie( "Daisy", 100);
    }
    for (int j = cows; j < number_of_animals; j++) {
        animals[j] = new hunter("Clarence", 50);
    }
}

int zoo::get_number_of_animals() {
    return number_of_animals;
}

string zoo::get_name() {
    return name;
}

animal** zoo::get_animals() {
    return animals;
}