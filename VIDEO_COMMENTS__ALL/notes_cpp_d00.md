# Notes sur les videos CPP
Texte normal

    Code truc
	et machin

Re-texte `code`. *italique* **gras**

## d00

### namespaces

    #include<stdio.h>
    namespace Foo {
    
    }
    
    namespace Muf = Foo;

### stdio streams
Cin
Cout
`>> et << gestion des flux de donnees`

	#include <iostream>

	int	main( void )
	{
		char	buff[512];
		std::out << "Hello world!" << std::endl;

		std
	}

### Class & Instances

// Dans 'Sample.class.hpp'

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample
{
public:
	Sample( void );
	~Sample( void );	
};

#endif // ************************************************************ SAMPLE_CLASS_H //


// Dans 'Sample.class.cpp':
#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void )
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

// Dans 'main.cpp'
#include "Sample.class.hpp"

int		main()
{
	Sample	instance;
	return 0;
}

// Compilation
g++ -Wall -Werror -Wextra -Wno-used Sample.class.cpp main.cpp


### Member attributes and member functions
Member Attributs : variables incus dans la classe de syntaxe `instance.foo = 42`
Member Functions : fonctions inclus dans la classe de syntaxe declarative (hpp) `void	bar( void );`
puis Definition de la fonction-membre:
	void	Sample::bar( void )
	{
		std::cout << "Member function bar called" << std::endl;
		return;
	}

### This
Pointeur special d'instance `this`
S'utilise comme: `this->nomAttribut = 42;`   ou    `this->nomFunction();`


### Initialisation list
Dans `Sample2.class.cpp`:
	Sample2::Sample2( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3)
	{
		##code...
	}


### const pour constantes
Fonction membre qui ne modifie pas l'instance de votre classe, definir et decrire en `const`;
En fait, `const` mets la fonction en read only.

Plus notre code sera en **const**, plus il sera **robuste et facile a debugger**.
__Voir main3.cpp__

### Visibility
private:   vs .   public:
__Voir main3.cpp__

### Classes vs Structures
Scope **public** par defaut pour les __structures__.
Scope **prive** par defaut pour les __classes__.
__Voir main4.cpp__

### Accessors
Tous les attributs d'une classe seront privés, en général. Ils seront manipules par des:
getters
setters
Creer un acces `controlé` a un attribut privé.
__Voir main5.cpp__

### comparaisons sur des structures
Comparaison `structurelle` (vs `physique`) permettant de comparer deux a deux les attributs des instances, bien qu'elles ne pointent pas sur les mêmes zones mémoire.
Prototype: `int Compare(Sample * other) const;`
Il faut définir les modalités de comparaison dans la classe. Exemple:
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
__Voir main6.cpp__	

### NON Attributs-Membres et Fonctions-Membres
Membre: Existe au niveau de l'instance de la classe. Chaque attribut a des valeurs differentes pour chaque instance.
STATIC
Pas de pointeur `this` pour une function static.
Acces par `NomClasse::attributStatic`  ou  `NomClasse::attributStatic`.
__Voir main7.cpp__


### Pointeurs sur membres
Pointeurs et pointeurs sur fonction. Existent toujours en C++, augmenté de pointeurs sur attributs membre et fonction membre. Dans le main8.cpp:

	int		main()
	{
		Sample8		instance;                    // Une instance
		Sample8 *	instance_ptr = &instance;    // Un pointeur sur une instance

		int		Sample8::*p = NULL;              // Création d'un pointeur initialisé a NULL
		void	(Sample8::*f)( void ) const;     // Création d'un pointeur sur fonction 'f'

		p = &Sample8::foo;                       // Affectation d'une adresse a 'p'
		
		std::cout << "Value of member foo: " << instance.foo << std::endl;

		// Affectation d'une valeur a 'foo' par pointeur sur une instance 'instance'
		instance.*p = 21;                        
		std::cout << "Value of member foo: " << instance.foo << std::endl;

		// Affectation d'une valeur a 'foo' par l'adresse d'une classe
		instance_ptr->*p = 42;                   
		std::cout << "Value of member foo: " << instance.foo << std::endl;
		
		f = &Sample8::bar;						// Affectation d'une adresse de fonction a 'f'

		(instance.*f)();		// pointeur sur la fonction de cette instance
		(instance_ptr->*f)();   // pointeur sur la fonction de cette adresse d'instance
		
		return 0;
	}