#include <bits/stdc++.h>
int max_element(int array[], int n) {
    if(n < 1)  
        return 0;
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }

    return max;
}