/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Card3.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 10:38:53 by gcaron            #+#    #+#             */
/*   Updated: 2018/03/28 10:38:57 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Card3.class.hpp"

Card3::Card3( void )
{
	std::cout << "Constructor called" << std::endl;
	Card3::_nbInst +=1;
	return;
}

Card3::~Card3( void )
{
	std::cout << "Destructor called" << std::endl;
	Card3::_nbInst -=1;
	return;
}




int		Card3::getNbInst( void )
{
	return Card3::_nbInst;
}

int		Card3::_nbInst = 0;   // Initialisation de 'attribut `static` => non-membre'



// ************************************************************** //

