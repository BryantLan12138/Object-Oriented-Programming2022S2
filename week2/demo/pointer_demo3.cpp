#include <iostream>

using namespace std;

int main()
{
    int * ptr, i = 42, k = 477, l = 43;
    ptr = &i;
    cout << &i << endl;
    cout << &k << endl;
    cout << &l << endl;
    cout << "Value of i: " << *ptr << endl;
    cout << "Value of k: " << *(ptr-1) << endl;
    cout << "Value of l: " << *(ptr-2) << endl;

}