#include <iostream>
using namespace std;

extern void copy_doubles(double *old_array,double *new_array,int length);

int main() {
    double* arr1 = new double[5]{1, 2, 3, 4, 5};
    double* arr2 = new double[5];
    copy_doubles(arr1, arr2, 5);

    for(int i = 0; i < 5; i++) {
        cout << *(arr2+i) << " ";
    }
    
    cout << endl;

}