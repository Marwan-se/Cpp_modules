/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:05:50 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/10 23:41:51 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*---------------------- Constructors & Destructors -----------------------*/

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "Wrong cat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

/*-------------------------- Copy && Assignation --------------------------*/

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    this->type = rhs.type;
    return (*this);
}

/*----------------------------- Member Functions --------------------------*/

std::string WrongCat::getType()
{
    return (this->type);
}

void WrongCat::setType(std::string value)
{
    this->type = value;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makes a sound" << std::endl;
}