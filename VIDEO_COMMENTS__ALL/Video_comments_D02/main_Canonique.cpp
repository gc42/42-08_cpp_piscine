#include <iostream>
#include "Canonique.hpp"

int		main()
{
	Canonique	instance1;
	Canonique	instance2(42);
	Canonique	instance(instance1);

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2;
	std::cout << instance3 << std::endl;

	return 0;
}

// ************************************************************************* //