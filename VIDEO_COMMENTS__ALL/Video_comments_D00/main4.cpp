#include <iostream>
#include "Sample4.class.hpp"

int		main()
{
	Sample4 instance;

	instance.publicFoo = 42;
	std::cout << "==instance.publicFoo: " << instance.publicFoo << std::endl;

	// instance._privateFoo = 42;
	// std::cout << "instance._privateFoo: " << instance._privateFoo << stendl;

	instance.publicBar();
	// instance._privateBar();
	

	return 0;
}