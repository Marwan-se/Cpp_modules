/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:05:50 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/09 22:17:34 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "Wrong cat";
}

WrongCat::WrongCat(const WrongCat &copy)
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

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

std::string WrongCat::getType()
{
    return (this->type);
}

void WrongCat::setType(std::string value)
{
    this->type = value;
}

void WrongCat::makeSound()
{
    std::cout << "WrongCat makes a sound" << std::endl;
}