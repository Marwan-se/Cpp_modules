/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:14:54 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/10 01:32:29 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = rhs.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

std::string Dog::getType()
{
    return (this->type);
}

void Dog::setType(std::string value)
{
    this->type = value;
}

void Dog::makeSound() const
{
    std::cout << "wouf wouf negus" << std::endl;
}
