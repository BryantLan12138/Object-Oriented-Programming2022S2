#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main()
{
    int test_array[6] = {1,1,1,0,1,0};
    cout << binary_to_int(test_array, 6) <<endl;
    
    return 0;
}