#include <iostream>
#include "Polymorphisme.cpp"

int		main()
{
	char 		c = "a";
	int			n = 42;
	float		z = 3.14;
	Sample1* 	i = new Sample1;

	// CODE
	Sample1::bar(c);
	Sample1::bar(n);
	Sample1::bar(z);
	Sample1::bar(i);

	delete i;

	return 0;
}