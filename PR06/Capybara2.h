
#ifndef CAPYBARA_H
#define CAPYBARA_H
#include <string>

class Capybara
{
    std::string name;
    int age;
public:
    Capybara() ;                      // no name or age is required to create a capybara
    void setName(std::string capyName);    // change the capybara's name
    std::string getName();
    void setAge(int capyAge);        // change the capybara's age
    int getAge();
};

#endif