#include <iostream>
#include "Wagon.h"

using namespace std;

int main()
{
	Capybara capy ;
	Wagon w;

	for ( int i = 0 ; i < 5 ; i++ )
	{
		capy.setName("cbara") ;
		capy.setAge(i+5) ;
		if ( !w.addCapybara(capy) )
		{
			cout << "oops cannot add capybara: " << capy.getName() << " of age " << capy.getAge() << endl ;
		}
	}
	w.printCapybaras() ;
	w.emptyWagon() ;
	w.addCapybara(capy) ;
	w.printCapybaras() ;

	return 0;
}
