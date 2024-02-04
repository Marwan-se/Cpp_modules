/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:08:58 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/04 16:46:20 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits_num = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    store_fixed_point = 0;
}

Fixed::Fixed( const int value )
{
    std::cout << "Int constructor called" << std::endl;
    this->store_fixed_point = value << Fixed::bits_num;
}

Fixed::Fixed( const float value )
{
   std::cout << "Float constructor called" << std::endl; 
   this->store_fixed_point = roundf(value * (1 << Fixed::bits_num));
}

Fixed::Fixed(const Fixed &value)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = value;
}

Fixed &Fixed::operator=( const Fixed &value )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->store_fixed_point = value.store_fixed_point;
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

float Fixed::toFloat( void ) const
{
    return ((float)this->store_fixed_point / (1 << Fixed::bits_num));
}

int Fixed::toInt( void ) const
{
    return (this->store_fixed_point >> Fixed::bits_num);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
    out << value.toFloat();
    return (out);
}