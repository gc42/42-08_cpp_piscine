/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Card3.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 10:39:03 by gcaron            #+#    #+#             */
/*   Updated: 2018/03/28 10:39:06 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CARD3_CLASS_H
# define CARD3_CLASS_H

class Card3
{
public:

	Card3( void );
	~Card3( void );

	static int		getNbInst( void );



private:

	static int		_nbInst;

};



#endif   //  ############################################################ CARD3_CLASS_H //
