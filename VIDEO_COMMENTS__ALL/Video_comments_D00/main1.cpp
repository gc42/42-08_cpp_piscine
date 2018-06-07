/*
#include <stdio.h>

int	gl_var = 1;
int	f( void ) { return 2;}

namespace	Foo
{
	int	gl_var = 3;
	int	f( void ) { return 4;}
}

namespace	Bar
{
	int	gl_var = 5;
	int	f( void ) { return 6;}
}

namespace	Muf = Bar;

int		main( void )
{

	printf( "gl_var:      [%d]\n",   gl_var );
	printf( "f():         [%d]\n\n", f() );

	printf( "Foo::gl_var: [%d]\n",   Foo::gl_var );
	printf( "Foo::f():    [%d]\n\n", Foo::f() );

	printf( "Bar::gl_var: [%d]\n",   Bar::gl_var );
	printf( "Bar::f():    [%d]\n\n", Bar::f() );

	printf( "Muf::gl_var: [%d]\n",   Muf::gl_var );
	printf( "Muf::f():    [%d]\n\n", Muf::f() );

	printf( "*::gl_var: [%d]\n",   ::gl_var );
	printf( "*::f():    [%d]\n\n", ::f() );

	return 0;
}
*/

// ############ stdio exemples
/*
#include <iostream>

int		main( void )
{
	char	buff[512];

	std::cout << "Hello world !" << std::endl;

	std::cout << "Input a word :";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;

	return 0;
}
*/



// ############ class &instances exemples
/*
#include "Sample1.class.hpp"

// Utilisation de la class

int		main()
{
	Sample1	instance;
	return 0;
}
*/



// ############ Attributes and member functions
/*
#include <iostream>
#include "Sample1.class.hpp"



int		main()
{
	Sample1	instance;

	// instance.foo = 42;

	// std::cout << "instance.foo: " << instance.foo << std::endl;

	// instance.bar();

	return 0;
}
*/




// ############ Listes d'initialisation
#include <iostream>
#include "Sample2.class.hpp"


int		main ( void )
{
	Sample2 instance1( 'a', 42, 4.2f );
	Sample2 instance2( 'z', 84, 3.14f );

	return 0;
}