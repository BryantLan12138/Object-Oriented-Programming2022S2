#include <iostream>

using namespace std;

extern int size_of_variable_star_t();

int main() {
    // declaring on stack 
    int a = 0;
    int *p;
    
    
    // cout << p << endl;

    // cout << sizeof(p) << endl;
    // p = &a;
    // cout << sizeof(p) << endl;

    // cout << p << endl;
    // declaring on heap 
    int *t = new int;
    cout << sizeof(t) << endl;
    cout << sizeof(p) << endl;
    
    // int array[];
    
    int *array = new int[5];
    int array2[5] = {1, 2, 3, 4, 5}; 
    int *ptr;
    cout << *array << endl;
    cout << *(array2 - 1) << endl;

    // sizeof(p) == sizeof(t) == sizeof(arr)
    // int *u = new int;
    // cout << t << endl;
    // cout << *u << endl;
    

    // cout << size_of_variable_star_t() << ' ' << sizeof(p) << '\n';
    return 0;
}