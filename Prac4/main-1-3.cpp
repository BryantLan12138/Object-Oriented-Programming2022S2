#include <iostream>
using namespace std;

extern void copy_integers(int old_array[],int new_array[],int length);

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];
    copy_integers(arr1, arr2, 5);

    for(int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    
    cout << endl;

}