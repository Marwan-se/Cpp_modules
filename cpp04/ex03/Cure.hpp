/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:25:45 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 19:30:48 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
    
    /*---------------------- Orthodox Canonical Form ----------------------*/
        //default constructor
        Cure();
        //copy constructor
        Cure(const Cure &type);
        //assignment operator
        Cure &operator=(const Cure &rhs);
        //destructor
        ~Cure();
    /*---------------------------------------------------------------------*/

    /*----------------------------- Member Functions -----------------------*/
        //member function
        AMateria* clone() const;
        void use(ICharacter &target);
        std::string const &getName() const;
    /*---------------------------------------------------------------------*/
};

#endif