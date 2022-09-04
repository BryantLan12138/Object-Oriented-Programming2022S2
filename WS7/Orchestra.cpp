#include<string>
#include "Musician.h"
#include "Orchestra.h"

Orchestra::Orchestra(int size): _size(size),_current_size(0){// constructor for an orchestra of given size
    if(_size==0){
        _members=nullptr;
        return;
    }

    //only proceeds to this point if _size!=0
    _members=new Musician[size];
}   


Orchestra::Orchestra(): Orchestra(0){}           // default constructor


// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members(){
    return _current_size;
} 


// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(string instrument){
    int num_with_instrument = 0;

    for(int i=0;i<_current_size;i++){
        if(_members[i].get_instrument()==instrument){
            num_with_instrument++;
        }
    }

    bool instrument_exists;

    if(num_with_instrument>0){
        instrument_exists=true;
    }else{
        instrument_exists=false;
    }

    return instrument_exists;
} 


Musician *Orchestra::get_members(){        // returns the array of members of the orchestra
    Musician* members_copy=new Musician[_current_size];

    for(int i=0;i<_current_size;i++){
        members_copy[i]=_members[i];
    }

    return members_copy;
}


// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(Musician new_musician){
    bool addition_possible;

    if(_current_size>=_size){
        addition_possible=false;
    }else{
        addition_possible=true;

        _members[_current_size] = new_musician;
        _current_size++;
    }

    return addition_possible;
}


Orchestra::~Orchestra(){
    delete[] _members;
}