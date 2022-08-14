#include <iostream>
using namespace std;
int size_of_array_arr() {
    int max_n = 3;
    int *arr = new int[max_n];
    // cout << arr << endl;
    // cout << sizeof(arr) << endl;
    // cout << *arr << endl;
    // cout << sizeof(*arr) << endl;

    int res = sizeof(*arr) * max_n;
    delete[] arr;
    return res;
}