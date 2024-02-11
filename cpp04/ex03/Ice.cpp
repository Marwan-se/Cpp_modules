/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:27:17 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 20:11:59 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

/*---------------------- Constructors & Destructors ----------------------*/

Ice::Ice()
{
    std::cout << "Ice default constructor called" << std::endl;
    this->type = "ice";
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

/*-------------------------- Copy && Assignation --------------------------*/

Ice::Ice(const Ice &copy)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = copy;
}

Ice &Ice::operator=(const Ice &rhs)
{
    std::cout << "Ice assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

/*----------------------------- Member Functions --------------------------*/

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}
