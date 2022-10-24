#include "sort_by_name.h"
#include <string>

using namespace std;

void sort_by_name::sort(animal **animals,int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (animals[i]->get_name() > animals[j]->get_name()) {
                animal* temp = animals[j];
                animals[j] = animals[i];
                animals[i] = temp;
            }
        }
    }
}
