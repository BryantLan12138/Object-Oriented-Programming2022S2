#include<string>
#include<iostream>
#include"Musician.h"

using namespace std;

void print_info(Musician m){
    cout<<"Instrument: "<<m.get_instrument()<<"\nExperience: "<<m.get_experience()<<" years\n\n";
}

int main(){
    Musician m1("Violin",10);
    Musician m2("Shitty Violin",5);

    print_info(m1);
    print_info(m2);

    return 0;
}