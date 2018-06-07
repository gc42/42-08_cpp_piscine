#include <iostream>
#include "Sample8.class.hpp"




int		main()
{
	Sample8		instance;
	Sample8 *	instance_ptr = &instance;

	int		Sample8::*p = NULL;
	void	(Sample8::*f)( void ) const;

	p = &Sample8::foo;
	
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance_ptr->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	
	f = &Sample8::bar;

	(instance.*f)();		// pointeur sur la fonction de cette instance
	(instance_ptr->*f)();   // pointeur sur la fonction de cette adresse
	
	return 0;
}

