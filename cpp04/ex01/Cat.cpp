/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:14:49 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 11:49:47 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*---------------------- Constructors & Destructors -----------------------*/

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

/*-------------------------- Copy && Assignation --------------------------*/

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = rhs.type;
    *this->brain = *rhs.brain;
    return *this;
}

/*----------------------------- Member Functions --------------------------*/

std::string Cat::getType()
{
    return (this->type);
}

void Cat::setType(std::string value)
{
    this->type = value;
}

void Cat::makeSound() const
{
    std::cout << "meaw meaw" << std::endl;
}
