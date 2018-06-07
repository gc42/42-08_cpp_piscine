/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 10:39:18 by gcaron            #+#    #+#             */
/*   Updated: 2018/03/28 10:39:20 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Card3.class.hpp"


void	f0( void )
{
	Card3 instance;
	std::cout << "Nombre d'instances: " << Card3::getNbInst() << std::endl;
}


void	f1( void )
{
	Card3 instance;
	std::cout << "Nombre d'instances: " << Card3::getNbInst() << std::endl;
	f0();
}

int		main()
{
	std::cout << "Nombre d'instances: " << Card3::getNbInst() << std::endl;
	f1();
	std::cout << "Nombre d'instances: " << Card3::getNbInst() << std::endl;

	return 0;
}

