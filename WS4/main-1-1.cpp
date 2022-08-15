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
    
    int *array;
    // sizeof(p) == sizeof(t) == sizeof(arr)
    // int *u = new int;
    // cout << t << endl;
    // cout << *u << endl;
    

    // cout << size_of_variable_star_t() << ' ' << sizeof(p) << '\n';
    return 0;
}