#include <iostream>

using namespace std;

int main()
{
    // practice dereference
    
    // int i = 42, k;
    // int * j;
    // j = &i;
    // k = *j;
    // cout << k << endl;

    // one more practice 
    int i = 42;
    int *j;
    j = &i;
    cout << j << endl;
    cout << *j << endl;
    // increment the value of j by 1 without changing its address
    (*j)++;
    cout << j << endl;
    cout << *j << endl;
}