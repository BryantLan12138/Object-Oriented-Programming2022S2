#include <iostream>
#include "Person.h"
#include "Airplane.h"

int main()
{
	Person biggles(23,"biggles") ;
	Person wiggles(24,"wiggles") ;
	Person berty(19,"berty") ;
	Airplane jumbo("Jumbo Jet 747",biggles,wiggles) ;

	jumbo.printDetails();
	jumbo.setPilot(berty) ;
	jumbo.printDetails();
	jumbo.setCoPilot(biggles) ;
	jumbo.printDetails();

	return 0;
}
