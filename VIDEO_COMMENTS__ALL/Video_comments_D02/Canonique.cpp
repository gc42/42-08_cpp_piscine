//
// Created by Guillaume CARON on 3/29/18.
//

#include <iostream>
#include "Canonique.hpp"


Canonique::Canonique() : _foo(0)
{
	std::cout << "Default Constructor called" << std::endl;
	return;
}


Canonique::Canonique(int const n) : _foo(n)
{
	std::cout << "Parametric Constructor called" << std::endl;
	return;
}


Canonique::Canonique(Canonique const & src)
{
	std::cout << "Copy Controller called" << std::endl;
	*this = src;
	return;
}

Canonique::~Canonique(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}


int Canonique::getFoo() const
{
	return this->_foo;
}


Canonique &		Canonique::operator=( Canonique const & rhs)
{
	std::cout << "Assignment operator called" <<  std::endl;

	if (this != &rhs)
	{
		this-> = rhs.getFoo();
	}

	return *this;
}


/**
 * @brief Surcharge de '<<' pour redirection de flux vers la sortie standard
 * @param o
 * @param i
 * @return
 */
std::ostream &		operator<<( std::ostream & o, Canonique const & i)
{
	o << "The value of _foo is : " << i.getFoo();

	return o;
}