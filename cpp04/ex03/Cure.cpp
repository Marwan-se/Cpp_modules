/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:18:26 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 20:11:50 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*---------------------- Constructors & Destructors ----------------------*/

Cure::Cure()
{
    std::cout << "Cure default constructor called" << std::endl;
    this->type = "cure";
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

/*-------------------------- Copy && Assignation --------------------------*/

Cure::Cure(const Cure &copy)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = copy;
}

Cure &Cure::operator=(const Cure &rhs)
{
    std::cout << "Cure assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

/*----------------------------- Member Functions --------------------------*/

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
