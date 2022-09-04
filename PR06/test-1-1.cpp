#include <iostream>
#include "Capybara.h"

using namespace std;

int main()
{
	Capybara bob ;

	bob.setName("Bob") ;
	bob.setAge(42) ;
	cout << "Capybara: " << bob.getName() << " has age " << bob.getAge() << endl ;

	return 0 ;
}
