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


bool equalsArray(int *arr1,int *arr2,int length){
    bool equal_so_far=true;
    
    if(length<1){
        return false;
    }else{
        for(int i=0;i<length;i++){
            equal_so_far=equal_so_far&&(arr1[i]==arr2[i]);
        }
    }

    return equal_so_far;
}