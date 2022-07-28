#include <iostream>

using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int * ptr;

    ptr = &a[2];
    
    // should be 3
    cout << *ptr << endl;

    // should have a differemce with value 8 (size of INT is 4 times 2)
    cout << &a[0] << endl;
    cout << ptr << endl;

    // check array address, both are same 
    cout << a << endl;
    cout << &a[0] << endl;

    for(int i = 0; i < 10; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    cout << " -------------- " << endl;
    *ptr = 500;
    
    for(int i = 0; i < 10; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    return 0;
}