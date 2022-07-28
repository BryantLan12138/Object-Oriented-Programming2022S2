#include <iostream>

int is_identity(int array[10][10]) {
    int count = 0;
    for(int i = 0; i < 10; i++) {
        if(array[i][i] == 1) {
            count++;
        }
    }

    return count == 10 ? 1 : 0;
}