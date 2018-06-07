//
// Created by Guillaume CARON on 3/29/18.
//

#include <iostream>
#include "Polymorphisme.hpp"

Sample1::Sample1(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void const Sample1::bar(char const c)
{
	std::cout << "Member functuon bar called with 'char' overload :" << c << std::endl;
	return;
}

void const Sample1::bar(int const n) {}
{
	std::cout << "Member functuon bar called with 'int' overload :" << n << std::endl;
	return;
}

void const Sample1::bar(float const z) {}
{
std::cout << "Member functuon bar called with 'float' overload :" << z << std::endl;
return;
}

void const Sample1::bar(Sample1 const &i) {}
{
std::cout << "Member functuon bar called with 'Sample1 &' overload :" << std::endl;
return;
}
