#include <iostream>

using namespace std;

int main()
{
    int *ptr, array[3] = {43, 477, 34};
    ptr = &array[0];
    cout << "Value of 1st: " << *ptr << endl;
    cout << "Value of 2nd: " << *(ptr+1) << endl;
    cout << "Value of 3rd: " << *(ptr+2) << endl;

}