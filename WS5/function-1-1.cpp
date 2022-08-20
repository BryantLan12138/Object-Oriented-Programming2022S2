#include<iostream>

using namespace std;

int *readNumbers(){
    int * nums = new int[10];

    //cout<<"Enter 10 numbers, seperted by spaces: "<<endl;

    for(int i=0;i<10;i++){
        cin>>nums[i];
    }

    return nums;
}

void printNumbers(int *array,int length){
    for(int i=0;i<length;i++){
        cout<<i<<" "<<array[i]<<endl;
    }
}