#include <iostream>
#include "Sample7.class.hpp"

Sample7::Sample7( void )
{
	std::cout << "Constructor called" << std::endl;
	Sample7::_nbInst +=1;
	return;
}

Sample7::~Sample7( void )
{
	std::cout << "Destructor called" << std::endl;
	Sample7::_nbInst -=1;
	return;
}




int		Sample7::getNbInst( void )
{
	return Sample7::_nbInst;
}

int		Sample7::_nbInst = 0;   // Initialisation de 'attribut `static` => non-membre'



// ************************************************************** //

