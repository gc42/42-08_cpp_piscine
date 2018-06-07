//
// Created by Guillaume CARON on 3/29/18.
//

#ifndef PROJECT_CANONIQUE_HPP
#define PROJECT_CANONIQUE_HPP

#include <iostream>

class Canonique
{
public:

	Canonique(void);
	Canonique(int const n);
	Canonique( Canonique const & src);
	~Canonique(void);

	Canonique &		operateur=(Canonique const & rhs);

	int		getFoo(void) const;

	// On peut ajouter, une fonction pour serialiser la classe dans une string
	// Veut dire : transformer en string les infos de l'instance
	// Tres utile en mode debug

private:

	int		_foo;
};



std::ostream &		operator<<( std::ostream & o, Canonique const & i);

#endif //PROJECT_CANONIQUE_HPP
