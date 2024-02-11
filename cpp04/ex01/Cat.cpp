/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:14:49 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 12:58:01 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

/*---------------------- Constructors & Destructors -----------------------*/

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    if (this->brain)
        delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

/*-------------------------- Copy && Assignation --------------------------*/

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*rhs.brain);
    this->type = rhs.type;
    return *this;
}

/*----------------------------- Member Functions --------------------------*/

Brain *Cat::getBrain() const
{
    return (this->brain);
}

void Cat::setBrain(Brain *value)
{
    *this->brain = *value;
}

void Cat::makeSound() const
{
    std::cout << "meaw meaw" << std::endl;
}
