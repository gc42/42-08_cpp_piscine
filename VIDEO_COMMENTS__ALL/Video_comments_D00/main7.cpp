#include <iostream>
#include "Sample7.class.hpp"


void	f0( void )
{
	Sample7 instance;
	std::cout << "Nombre d'instances: " << Sample7::getNbInst() << std::endl;
}


void	f1( void )
{
	Sample7 instance;
	std::cout << "Nombre d'instances: " << Sample7::getNbInst() << std::endl;
	f0();
}

int		main()
{
		std::cout << "Nombre d'instances: " << Sample7::getNbInst() << std::endl;
		f1();
		std::cout << "Nombre d'instances: " << Sample7::getNbInst() << std::endl;
	
	return 0;
}

