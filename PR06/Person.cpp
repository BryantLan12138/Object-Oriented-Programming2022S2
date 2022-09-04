
#include "Person.h"
#include<string>
using namespace std;

// implementation for Person constructor
Person::Person(){};

Person::Person(int mySalary, string myName){
    this->_Salary = mySalary;
    this->_Name = myName;
}

// implementation for setName function
void Person::setName(string myName){
    this->_Name = myName;
}

// implementation for getName function
string Person::getName(){return this->_Name;}

// implementation for setSalary function
void Person::setSalary(int mySalary){
    this->_Salary = mySalary;
}

// implementation for getSalary function
int Person::getSalary(){return this->_Salary;}