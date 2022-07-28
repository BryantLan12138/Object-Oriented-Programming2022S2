#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int main()
{
    int test_array[] = {1,2,2,1};
    
    cout << "Sum of the elements if the array is a palindrome : " << sum_if_palindrome(test_array,4) << endl;
    
    return 0;
}