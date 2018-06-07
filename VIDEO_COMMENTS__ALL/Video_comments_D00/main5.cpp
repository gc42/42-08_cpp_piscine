#include <iostream>
#include "Sample5.class.hpp"

int		main()
{
	Sample5 instance;

	instance.setFoo(42);
	std::cout << "==instance.getFoo(): " << instance.getFoo() << std::endl;
	instance.setFoo(0);
	instance.setFoo(-42);
	std::cout << "==instance.getFoo(): " << instance.getFoo() << std::endl;

	
	return 0;
}