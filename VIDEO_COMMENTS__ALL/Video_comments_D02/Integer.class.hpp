//
// Created by Guillaume CARON on 3/29/18.
//

#ifndef CPP_PISCINE_INTEGER_CLASS_HPP
#define CPP_PISCINE_INTEGER_CLASS_HPP

#include <iostream>

class Integer
{
public:

	Integer(const int n);	// Constructeur avec entier 'n'
	~Integer(void);			// Destructeur qui ne servira pas ici

	const int	getValue(void); // GETTER pour lire l'attribut '_n'

	Integer &	operator=(const Integer & rhs);			// Surcharge d'operateur
	Integer 	operator+(const Integer & rhs) const;

private:

	int		_n;		// Valeur de l'entier represente par l'instance
};


// SURCHARGE DE L'OPERATEUR '<<'
// C'est une fonction ordinaire (FONCTION NON MEMBRE, car hors de la portee de la classe Integer)
std::ostream & operator<<( std::ostream & o, Integer const & rhs );

#endif //CPP_PISCINE_INTEGER_CLASS_HPP
