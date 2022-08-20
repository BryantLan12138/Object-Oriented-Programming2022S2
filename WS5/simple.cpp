#include<iostream>
#include<string>
#include "student.h"

using namespace std;


class Student{
    protected:
        string name;
        int age;
        int ID;
    public:
        Student(string name,int age, int ID):name(name),age(age),ID(ID){}
        Student():Student("n",0,0){}
        void print(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"ID : "<<ID<<endl;
        }
};


int main(){
    Student s1("Red",10,69420);
    Student s2;

    /*
    cout<<"Name : "<<s1.name<<endl;
    cout<<"Age : "<<s1.age<<endl;
    cout<<"ID : "<<s1.ID<<endl;
    */

    s1.print();
    s2.print();

    return 0;
}