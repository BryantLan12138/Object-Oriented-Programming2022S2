#include <iostream>
double weighted_average(int array[], int n) {
    double result = 0.0;

    for(int i = 0; i < n; i++) {
        int current_digit = array[i];
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(array[j] == current_digit) {
                count++;
            }
        }

        result += double((current_digit * count)) / n;
        // std::cout << result << " ";

    }

    return result;
}