#include <iostream>
#include <string>
using namespace std;

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main() {
    string arr1[][2] = {{"string1", "string2"}, {"string3", "string4"}, {"string5", "string6"}};
    string arr2[][2] = {};
    string_2d_copy(arr1, arr2, 3);

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 2; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    
}