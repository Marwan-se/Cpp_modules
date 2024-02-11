/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:05:08 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 12:06:24 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*---------------------- Constructors & Destructors -----------------------*/

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria constructor called" << std::endl;
    this->type = type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

/*-------------------------- Copy && Assignation --------------------------*/

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = copy;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    std::cout << "AMateria assignation operator called" << std::endl;
    this->type = rhs.type;
    return (*this);
}

/*----------------------------- Member Functions --------------------------*/

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria use function called" << std::endl;
    (void)target;
}
