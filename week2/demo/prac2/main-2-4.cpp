#include <iostream>
using namespace std;



extern int sum_min_max(int integers[], int length);
extern int array_max(int integers[], int length);
extern int array_min(int integers[], int length);

int main()
{
    int test_array[] = {1,2,3,4};
    
    cout << "Integer(Min) : " << array_min(test_array,4) << endl;
    cout << "Integer(Max) : " << array_max(test_array,4) << endl;
    cout << "Sum of (Min) and (Max) : " << sum_min_max(test_array,4) << endl;
    
    return 0;
}