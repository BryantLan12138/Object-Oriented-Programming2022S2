#include "sort_by_animalID.h"
#include <string>

using namespace std;

void sort_by_animalID::sort(animal **animals,int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (animals[i]->get_animalID() > animals[j]->get_animalID()) {
                animal* temp = animals[j];
                animals[j] = animals[i];
                animals[i] = temp;
            }
        }
    }
}
