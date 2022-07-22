#include <iostream>
bool is_fanarray(int array[], int n) {
    bool result = true;

    // first check if is palindrome
    for(int i = 0; i < n / 2; i++) {
        if(array[i] != array[n - i - 1]) {
            result = false;
            break;
        }
    }

    // then check if is ascending
    for(int i = 0; i < n / 2; i++) {
        if(array[i] > array[i+1]) {
            result = false;
            break;
        }
    }

    return result;
}