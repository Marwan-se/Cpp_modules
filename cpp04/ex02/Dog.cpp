/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:14:54 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 12:55:27 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

/*---------------------- Constructors & Destructors -----------------------*/

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    if (this->brain)
        delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

/*-------------------------- Copy && Assignation --------------------------*/

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*rhs.brain);
    this->type = rhs.type;
    return *this;
}

/*----------------------------- Member Functions --------------------------*/

Brain *Dog::getBrain() const
{
    return (this->brain);
}

void Dog::setBrain(Brain *value)
{
    *this->brain = *value;
}

void Dog::makeSound() const
{
    std::cout << "wouf wouf" << std::endl;
}
