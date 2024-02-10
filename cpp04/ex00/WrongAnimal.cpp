/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:12:03 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/10 16:50:37 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*---------------------- Constructors & Destructors -----------------------*/

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "wrong animal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

/*-------------------------- Copy && Assignation --------------------------*/

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    this->type = rhs.type;
    return (*this);
}

/*----------------------------- Member Functions --------------------------*/

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::setType(std::string value)
{
    this->type = value;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a sound" << std::endl;
}
