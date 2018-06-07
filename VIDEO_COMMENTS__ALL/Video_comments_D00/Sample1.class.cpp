#include <iostream>
#include "Sample1.class.hpp"

// Definition de la class

Sample1::Sample1( void )		// Fonctions membre de la class
{
	std::cout << "Constructor called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();
	return;
}

Sample1::~Sample1( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample1::bar( void )
{
	std::cout << "Member function bar called" << std::endl;
	return;
}
