/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:12:47 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/10 16:52:37 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*---------------------- Constructors & Destructors -----------------------*/

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "ANIMALS";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

/*-------------------------- Copy && Assignation --------------------------*/

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &rhs)
{
    std::cout << "Animal assignation operator called" << std::endl;
    this->type = rhs.type;
    return (*this);
}

/*----------------------------- Member Functions --------------------------*/

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::setType(std::string value)
{
    this->type = value;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
}