#include <iostream>
#include "Sample5.class.hpp"

Sample5::Sample5(void)
{
	std::cout << "Constructor called" << std::endl;

	
	
	return;
}

Sample5::~Sample5(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}




int 	Sample5::getFoo(void) const
{
	return this->_foo;
}

void 	Sample5::setFoo(int v)
{
	if ( v >= 0 )
		this->_foo = v;

	return;
}

// ************************************************************** //

