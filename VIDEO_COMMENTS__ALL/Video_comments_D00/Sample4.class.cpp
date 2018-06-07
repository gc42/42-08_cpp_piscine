#include <iostream>
#include "Sample4.class.hpp"

Sample4::Sample4 (void)
{
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo" << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo" << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();
	
	return;
}

Sample4::~Sample4( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void 	Sample4::publicBar(void) const
{
	std::cout << "Member function publicBar called" << std::endl;

	return;
}

void 	Sample4::_privateBar(void) const
{
	std::cout << "Member function _privateBar called" << std::endl;

	return;
}

// ************************************************************** //

