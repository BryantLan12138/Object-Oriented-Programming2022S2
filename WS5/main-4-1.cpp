#include<iostream>

extern int secondSmallestSum(int* array,int length);

using namespace std;

int main(){
    int A[]={1,2,3,4};

    cout<<secondSmallestSum(A,4)<<endl;

    return 0;
}