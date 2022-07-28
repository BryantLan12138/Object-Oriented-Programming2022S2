#include <iostream>

int is_identity(int array[10][10]) {
    int count = 0;
    for(int i = 0; i < 10; i++) {
        if((array[i][i] == 1) && (array[i][i] != 0)) {
            count++;
        }
        /* except check diagnal value, also need to check if other
           position has a value of 0
        */
        else {
            count = 0;
        }
    }

    // return count == 10 ? 1 : 0;
    if(count == 10)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}