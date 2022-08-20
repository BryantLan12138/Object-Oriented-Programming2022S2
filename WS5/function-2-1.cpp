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


void hexDigits(int * digits, int length){
    for(int i=0;i<length;i++){

        cout<<i<<" "<<digits[i]<<" ";

        switch (digits[i]){
            case 1:
                cout<<1<<endl;
                break;
            case 2:
                cout<<2<<endl;
                break;
            case 3:
                cout<<3<<endl;
                break;
            case 4:
                cout<<4<<endl;
                break;
            case 5:
                cout<<5<<endl;
                break;
            case 6:
                cout<<6<<endl;
                break;
            case 7:
                cout<<7<<endl;
                break;
            case 8:
                cout<<8<<endl;
                break;
            case 9:
                cout<<9<<endl;
                break;
            case 10:
                cout<<"A"<<endl;
                break;
            case 11:
                cout<<"B"<<endl;
                break;
            case 12:
                cout<<"C"<<endl;
                break;
            case 13:
                cout<<"D"<<endl;
                break;
            case 14:
                cout<<"E"<<endl;
                break;
            case 15:
                cout<<"F"<<endl;
                break;
            default:
                cout<<"Invalid digit"<<endl;
        }
    }
}