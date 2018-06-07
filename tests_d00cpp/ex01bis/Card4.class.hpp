/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Card4.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 10:37:27 by gcaron            #+#    #+#             */
/*   Updated: 2018/03/28 10:37:30 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Card4_CLASS_H
# define Card4_CLASS_H

class Card4
{
public:

	Card4( void );
	~Card4( void );

	static int		getCountCards(void);



private:

	static int		_countCards;

};



#endif   //  ############################################################ Card4_CLASS_H //



/*

//const int MAX_CARDS = 8;

//class Card
//{
//
//public:
//	Card(void);
//	~Card(void);
//	int		setFirstName(std::string);
//	void	setLastName(std::string);
//	void	setNickName(std::string);
//	void	setLogin(std::string);
//	void	setPostalAddress(std::string);
//	void    setEmailAddress(std::string);
//	void    setPhoneNumber(std::string);
//	void    setBirthdayDate(std::string);
//	void    setFavoriteMeal(std::string);
//	void    setUnderwearColor(std::string);
//	void    setDarkestSecret(std::string);
//
//
//	std::string     getFirstName(void) const;
//	std::string     getLastName(void) const;
//	std::string     getNickName(void) const;
//	std::string     getLogin(void) const;
//	std::string     getPostalAddress(void) const;
//	std::string     getEmailAddress(void) const;
//	std::string     getPhoneNumber(void) const;
//	std::string     getBirthdayDate(void) const;
//	std::string     getFavoriteMeal(void) const;
//	std::string     getUnderWearColor(void) const;
//	std::string     getDarkestSecret(void) const;

//	static int		getCountCards(void);

//private:
//	std::string     _firstName;
//	std::string     _lastName;
//	std::string     _nickName;
//	std::string     _login;
//	std::string     _postalAddress;
//	std::string     _emailAddress;
//	std::string     _phoneNumber;
//	std::string     _birthdayDate;
//	std::string     _favoriteMeal;
//	std::string     _underwearColor;
//	std::string     _darkestSecret;

//	static int		_countCards;
//};



#endif //Card4_CLASS_HPP


 */
