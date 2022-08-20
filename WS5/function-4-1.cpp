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


int secondSmallestSum(int *array, int length){
    int smallest=2147483647; //default value: signed int limit
    int secondSmallest=2147483647; //default value: signed int limit
    int thisSum=0;

    for(int start=0;start<length;start++){
        for(int end=start+1;end<=length;end++){
            thisSum=0;

            for(int i=start;i<end;i++){
                thisSum+=array[i];
            }

            if(thisSum<smallest){
                secondSmallest=smallest;
                smallest=thisSum;
            }else if(thisSum<secondSmallest){
                secondSmallest=thisSum;
            }
        }
    }

    return secondSmallest;
} 