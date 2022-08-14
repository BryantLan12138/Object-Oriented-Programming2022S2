#include <iostream>

using namespace std;

extern int size_of_variable_star_t();

int main() {
    int a = 0;
    int *p;
    // cout << p << endl;

    // cout << sizeof(p) << endl;
    p = &a;
    // cout << sizeof(p) << endl;

    // cout << p << endl;

    int *t = new int;
    int *u = new int;
    // cout << t << endl;
    // cout << *u << endl;

    cout << size_of_variable_star_t() << ' ' << sizeof(p) << '\n';
    return 0;
}