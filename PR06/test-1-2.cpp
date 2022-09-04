#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person bob(42, "Bob") ;

	cout << "Person: " << bob.getName() << " has salary " << bob.getSalary() << endl ;
	bob.setName("Billy") ;
	bob.setSalary(99) ;
	cout << "Person: " << bob.getName() << " has salary " << bob.getSalary() << endl ;

	return 0 ;
}
