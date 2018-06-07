#include <iostream>
#include "Sample6.class.hpp"

Sample6::Sample6( int v ) : _foo( v )
{
	std::cout << "Constructor called" << std::endl;

	
	
	return;
}

Sample6::~Sample6(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}




int 	Sample6::getFoo(void) const
{
	return this->_foo;
}

int 	Sample6::compare( Sample6 * other ) const
{
	if ( this->_foo < other->getFoo() )
		return -1;
	else if ( this->_foo > other->getFoo() )
	{
		return 1;
	}

	return 0;
}

// ************************************************************** //

