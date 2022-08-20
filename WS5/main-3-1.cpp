#include<iostream>

extern bool equalsArray(int*,int*,int);

using namespace std;

int main(){
    int A[]={3,1,4,1,5};
    int B[]={3,1,4,1,5};
    int C[]={2,7,1,8,2};

    cout<<"Test 1 - expected result: 1; actual result: "<<equalsArray(A,B,5)<<endl;
    cout<<"Test 1 - expected result: 1; actual result: "<<equalsArray(B,B,5)<<endl;
    cout<<"Test 1 - expected result: 0; actual result: "<<equalsArray(C,B,5)<<endl;

    return 0;
}