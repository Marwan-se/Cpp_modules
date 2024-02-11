/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:02:34 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 12:07:36 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class  AMateria
{
    protected:
        std::string type;
    public:
    
    /*---------------------- Orthodox Canonical Form ----------------------*/
        //default constructor
        AMateria();
        //parameterized constructor
        AMateria(std::string const &type);
        //copy constructor
        AMateria(const AMateria &type);
        //assignment operator
        AMateria &operator=(const AMateria &rhs);
        //destructor
        virtual ~AMateria();
    /*---------------------------------------------------------------------*/
        
    /*----------------------------- Member Functions -----------------------*/
        //getters
        std::string const &getType() const;
        //setters
        void setType(std::string value);
        //member function
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &target);
    /*---------------------------------------------------------------------*/
};