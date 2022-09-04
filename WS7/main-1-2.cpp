#include<iostream>
#include<string>
#include "Orchestra.h"

using namespace std;

void print_Musician_array(Musician *arr,int size){
    cout<<"-------------Orchestra Members-------------"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Instrument: "<<arr[i].get_instrument()<<"\nExperience: "<<arr[i].get_experience()<<" years\n\n";
    }
    cout<<"-------------------------------------------"<<endl<<endl;
}

void print_info(Musician m){
    cout<<"Instrument: "<<m.get_instrument()<<"\nExperience: "<<m.get_experience()<<" years\n\n";
}

void add_to_orchestra(Orchestra *o,Musician m){
    if(!o->add_musician(m)){
        cout<<"--------------ADDITION FAILED--------------\nThe following musician was not added:\n";
        print_info(m);
    }
}

int main(){
    Orchestra orch(2);

    Musician m1("Violin",10);
    Musician m2("Shitty violin",5);
    Musician m3("Big upright violin",11);

    print_Musician_array(orch.get_members(),orch.get_current_number_of_members());

    add_to_orchestra(&orch,m1);
    add_to_orchestra(&orch,m2);
    add_to_orchestra(&orch,m3);

    print_Musician_array(orch.get_members(),orch.get_current_number_of_members());

    return 0;
}