/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 10:37:42 by gcaron            #+#    #+#             */
/*   Updated: 2018/03/28 10:38:27 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Card4.class.hpp"


void	f0( void )
{
	Card4 instance;
	std::cout << "Nombre d'instances: " << Card4::getCountCards() << std::endl;
}


void	f1( void )
{
	Card4 instance;
	std::cout << "Nombre d'instances: " << Card4::getCountCards() << std::endl;
	f0();
}

int		main()
{
	std::cout << "Nombre d'instances: " << Card4::getCountCards() << std::endl;
	f1();
	std::cout << "Nombre d'instances: " << Card4::getCountCards() << std::endl;
	Card4*	instance3 = new Card4;
	Card4*	instance4 = new Card4;
	std::cout << "Nombre d'instances: " << Card4::getCountCards() << std::endl;
	delete instance3;
	std::cout << "Nombre d'instances: " << Card4::getCountCards() << std::endl;
	delete instance4;
	std::cout << "Nombre d'instances: " << Card4::getCountCards() << std::endl;


	return 0;
}






/*

//void	f0( void )
//{
//	Card instance;
//	std::cout << "Nombre d'instances: " << Card::getCountCards() << std::endl;
//}
//
//void	f1( void )
//{
//	Card instance;
//	std::cout << "Nombre d'instances: " << Card::getCountCards() << std::endl;
//	f0();
//}

//int		main()
//{
//	std::cout << "Nombre d'instances: " << Card::getCountCards() << std::endl;
//	f1();
//	std::cout << "Nombre d'instances: " << Card::getCountCards() << std::endl;
//	Card instance2;
//	std::cout << "Nombre d'instances: " << Card::getCountCards() << std::endl;
//	Card instance3;
//	std::cout << "Nombre d'instances: " << Card::getCountCards() << std::endl;

//	return 0;

//}

 */
