#include <iostream>

using namespace std;

int main()
{
    int * ptr;
    int i = 0;

    // above initialization equivelant to int *ptr, i;
    i = 11;
    ptr = &i;

    cout << "Value of ptr is: " << ptr << endl;
    // dereferencing 
    cout << "Value of i is: " << *ptr << endl;
}