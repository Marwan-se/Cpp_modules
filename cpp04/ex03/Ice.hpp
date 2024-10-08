/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:11:26 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 14:20:39 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
	
	/*---------------------- Orthodox Canonical Form ----------------------*/
		//default constructor
		Ice();
		//copy constructor
		Ice(const Ice &type);
		//assignment operator
		Ice &operator=(const Ice &rhs);
		//destructor
		~Ice();
	/*---------------------------------------------------------------------*/

	/*----------------------------- Member Functions -----------------------*/
		//member function
		AMateria* clone() const;
		void use(ICharacter &target);
	/*---------------------------------------------------------------------*/
};

#endif