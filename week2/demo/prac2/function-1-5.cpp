#include <iostream>

using namespace std;

void print_summed(int array1[3][3],int array2[3][3]) {
    int sum[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = array1[i][j] + array2[i][j];
            // cout << current_result << " ";
        }
        // cout << "\n";
    }
    // cout << endl;
     cout << sum[0][0] << " " << sum[0][1] << " " << sum[0][2] << "\n"
         << sum[1][0] << " " << sum[1][1] << " " << sum[1][2] << "\n"
         << sum[2][0] << " " << sum[2][1] << " " << sum[2][2] << endl;
}