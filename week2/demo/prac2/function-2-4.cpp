#include <iostream>
using namespace std;

int sum_min_max(int integers[], int length);
int array_max(int integers[], int length);
int array_min(int integers[], int length);

int sum_min_max(int integers[], int length)
{
    int i;
    int sum_max_min = 0;
    
    sum_max_min = array_max(integers,length) + array_min(integers,length);
    
    return sum_max_min;
}

int array_max(int integers[], int length)
{
    int i;
    int max = integers[0];
    
    for(i = 0; i < length; i++)
    {
        if (integers[i] > max)
        {
            max = integers[i];
        }
    }
    return max;
}

int array_min(int integers[], int length)
{
    int i;
    int min = integers[0];
    
    for(i = 0; i < length; i++)
    {
        if (integers[i] < min)
        {
            min = integers[i];
        }
    }
    return min;
}