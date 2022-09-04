
#ifndef PERSON_H
#define PERSON_H

#include<string>
using namespace std;

class Person{
    protected:
        int _Salary;
        string _Name;
    public:
        Person();
        Person(int, string);
        void setName(string);
        string getName();
        void setSalary(int);
        int getSalary();
};

#endif