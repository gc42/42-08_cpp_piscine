//
// Created by Guillaume CARON on 3/29/18.
//

#include <iostream>
#include "Integer.class.hpp"

/**
 * @brief Constructor
 * @param int n : l'entier qui sera passe en parametre a l'instance courante de la class Integer
 */
Integer::Integer(const int n) : _n(n)
{
	std:cout << "Constructor called with value " << n << std::endl;
	return;
}

/**
 * @brief Destructor
 */
Integer::~Integer(void)
{
	std:cout << "Destructor called with value " << this->_n << std::endl;
	return;
}


const int Integer::getValue(void)
{
	return this->_n;
}


/**
 * @brief Surcharge de l'operateur '='
 * @param this : premier operateur -invisible-
 * @param class Integer &rhs : second operateur, adresse de l'instance 'rhs'
 * @return une reference sur l'instance courante
 */
Integer& 	Integer::operator=(const Integer &rhs)
{
	std::cout << "Assignation operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();

	// this est un pointeur sur reference. Ici il est dereference pour renvoyer une reference.
	return *this;
}


/**
 * @brief Surcharge de l'operateur '+'
 * @param this : premier operateur -invisible-
 * @param class Integer &rhs : second operateur, adresse de l'instance 'rhs'
 * @return une copie de l'instance courante
 */
Integer		Integer::operator+(const Integer &rhs) const
{
	std::cout << "Assignation operator called from " << this->_n;
	std::cout << " and/plus " << rhs.getValue() << std::endl;

	// Avec le resultat _+_ on renvoie une copie de l'instance d'origine
	return Integer( this->_n + rhs.getValue() ); //
}



/**
 * @brief Surcharge de l'operateur << (FONCTION NON MEMBRE)
 * @param std:ostream o : une reference a l'instance 'o' de la classe 'ostream'
 * @param class Integer &rhs : second operateur, adresse de l'instance 'rhs'
 * @return une reference  sur l'instance courante
 */
std::ostream &	operator<<( std:ostream & o, Integer const & rhs )
{
	o << rhs.getValue();
	return o;
}
