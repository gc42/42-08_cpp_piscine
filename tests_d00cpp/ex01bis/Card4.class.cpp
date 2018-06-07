/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Card4.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 10:37:13 by gcaron            #+#    #+#             */
/*   Updated: 2018/03/28 10:37:20 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Card4.class.hpp"

Card4::Card4( void )
{
	std::cout << "Constructor called" << std::endl;
	Card4::_countCards +=1;
	return;
}

Card4::~Card4( void )
{
	std::cout << "Destructor called" << std::endl;
	Card4::_countCards -=1;
	return;
}




int		Card4::getCountCards( void )
{
	return Card4::_countCards;
}

int		Card4::_countCards = 0;   // Initialisation de 'attribut `static` => non-membre'



// ************************************************************** //








/*


//Card::Card(void)
//{
//	std::cout << "Constructor Card called" << std::endl;
//	Card::_countCards += 1;
//	return;
//}
//Card::~Card(void)
//{
//	std::cout << "Destructor called" << std::endl;
//	Card::_countCards -= 1;
//	return;
//}

//std::string Card::getFirstName(void)      const { return (this->_firstName); }
//
//std::string Card::getLastName(void)       const { return (this->_lastName); }
//
//std::string Card::getNickName(void)       const { return (this->_nickName); }
//
//std::string Card::getLogin(void)          const { return (this->_login); }
//
//std::string Card::getPostalAddress(void)  const { return (this->_postalAddress); }
//
//std::string Card::getEmailAddress(void)   const { return (this->_emailAddress); }
//
//std::string Card::getPhoneNumber(void)    const { return (this->_phoneNumber); }
//
//std::string Card::getBirthdayDate(void)   const { return (this->_birthdayDate); }
//
//std::string Card::getFavoriteMeal(void)   const { return (this->_favoriteMeal); }
//
//std::string Card::getUnderWearColor(void) const { return (this->_underwearColor); }
//
//std::string Card::getDarkestSecret(void)  const { return (this->_darkestSecret); }




//int		Card::getCountCards(void)
//{
//	return Card::_countCards;
//}
//
//int		Card::_countCards = 0; // Initialisation d'un attribut static nonMembre



//int        Card::setFirstName(std::string str)
//{
//	if (str != "")
//	{
//		this->_firstName = str;
//		return 0;
//	} else
//		return 1;
//}
//
//void        Card::setLastName(std::string str)
//{
//    this->_lastName = str;
//    return ;
//}
//
//void        Card::setNickName(std::string str)
//{
//    this->_nickName = str;
//    return ;
//}
//
//void        Card::setLogin(std::string str)
//{
//    this->_login = str;
//    return ;
//}
//
//void        Card::setPostalAddress(std::string str)
//{
//    this->_postalAddress = str;
//    return ;
//}
//
//void        Card::setEmailAddress(std::string str)
//{
//    this->_emailAddress = str;
//    return ;
//}
//
//void        Card::setPhoneNumber(std::string str)
//{
//    this->_phoneNumber = str;
//    return ;
//}
//
//void        Card::setBirthdayDate(std::string str)
//{
//    this->_birthdayDate = str;
//    return ;
//}
//
//void        Card::setFavoriteMeal(std::string str)
//{
//    this->_favoriteMeal = str;
//    return ;
//}
//
//void        Card::setUnderwearColor(std::string str)
//{
//    this->_underwearColor = str;
//    return ;
//}
//
//void        Card::setDarkestSecret(std::string str)
//{
//    this->_darkestSecret = str;
//    return ;
//}

 */
