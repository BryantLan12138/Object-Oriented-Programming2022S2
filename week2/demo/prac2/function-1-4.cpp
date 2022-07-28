#include <iostream>

using namespace std;

void print_scaled(int array[3][3],int scale) {
    int multiply_by_scale[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            multiply_by_scale[i][j] = array[i][j] * scale;
            // cout << array[i][j] << " ";
        }
        // cout << "\n";
    }
    // cout << endl;
    cout << multiply_by_scale[0][0] << " " << multiply_by_scale[0][1] << " " << multiply_by_scale[0][2] << "\n" 
         << multiply_by_scale[1][0] << " " << multiply_by_scale[1][1] << " " << multiply_by_scale[1][2] << "\n"
         << multiply_by_scale[2][0] << " " << multiply_by_scale[2][1] << " " << multiply_by_scale[2][2] << endl;
}