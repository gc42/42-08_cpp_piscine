#include <iostream>
#include "Sample6.class.hpp"

int		main()
{
	Sample6 instance1( 42 );
	Sample6 instance2( 42 );

	if ( &instance1 == &instance1 )
		std::cout << "1 et 1 physiquement egaux: OUI" << std::endl;
	else
		std::cout << "1 et 1 physiquement egaux: NON" << std::endl;

	if ( &instance1 == &instance2 )
		std::cout << "1 et 2 physiquement egaux: OUI" << std::endl;
	else
		std::cout << "1 et 2 physiquement egaux: NON" << std::endl;



	if ( instance1.compare( &instance1 ) == 0 )
		std::cout << "1 et 1 structurellement egaux: OUI" << std::endl;
	else
		std::cout << "1 et 1 structurellement egaux: NON" << std::endl;

	if ( instance1.compare( &instance2 ) == 0 )
		std::cout << "1 et 2 structurellement egaux: OUI" << std::endl;
	else
		std::cout << "1 et 2 structurellement egaux: NON" << std::endl;


	
	return 0;
}