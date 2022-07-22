#include <iostream>
using namespace std;

int count(int array[], int n) {
    int result = 0;
    for(int i = 0; i < n; i++) {
        if(array[i] % 2 == 0) {
            result++;
        }
    }

    return result;
}