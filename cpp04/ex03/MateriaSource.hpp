/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:06:04 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 19:55:35 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *LearnedMateria[4];
	public:
	
	/*---------------------- Orthodox Canonical Form ----------------------*/
		//default constructor
		MateriaSource();
		//copy constructor
		MateriaSource(const MateriaSource &copy);
		//assignment operator
		MateriaSource &operator=(const MateriaSource &rhs);
		//destructor
		~MateriaSource();
	/*---------------------------------------------------------------------*/

	/*----------------------------- Member Functions -----------------------*/
		//member function
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
	/*---------------------------------------------------------------------*/

};

#endif