/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:45:57 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/04 16:09:59 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits_num = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    store_fixed_point = 0;
}

Fixed::Fixed(const Fixed &value)
{
    std::cout << "Copy constructor called" << std::endl;
    //*this refers in main to b
    //value refers in main to a
    *this = value;
}

Fixed &Fixed::operator=( const Fixed &value )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->store_fixed_point = value.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->store_fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    this->store_fixed_point = raw;
}
