
#ifndef CAPYBARA_H
#define CAPYBARA_h

#include <string>
using namespace std;

class Capybara{
    private:
        string _Name;
        int _Age;
    public:
        Capybara();
        void setName(string);
        string getName();
        void setAge(int);
        int getAge();
};

#endif