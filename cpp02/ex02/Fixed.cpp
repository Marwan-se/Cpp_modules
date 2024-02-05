/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:16:16 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/05 00:07:22 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits_num = 8;

//default constructor
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    store_fixed_point = 0;
}

//int constructor
Fixed::Fixed( const int value )
{
    std::cout << "Int constructor called" << std::endl;
    this->store_fixed_point = value << Fixed::bits_num;
}

//float constructor
Fixed::Fixed( const float value )
{
   std::cout << "Float constructor called" << std::endl; 
   this->store_fixed_point = roundf(value * (1 << Fixed::bits_num));
}

//copy constructor
Fixed::Fixed(const Fixed &value)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = value;
}

// copy assignment operator
Fixed &Fixed::operator=( const Fixed &value )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->store_fixed_point = value.store_fixed_point;
    return (*this);
}

//destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

//comparison != operator
bool Fixed::operator!=(const Fixed &value) const
{
    return (this->store_fixed_point != value.store_fixed_point);
}

//comparison == operator
bool Fixed::operator==(const Fixed &value) const
{
    return (this->store_fixed_point == value.store_fixed_point);
}

//comparison < operator
bool Fixed::operator<(const Fixed &value) const
{
    return (this->store_fixed_point < value.store_fixed_point);
}

//comparison > operator
bool Fixed::operator>(const Fixed &value) const
{
    return (this->store_fixed_point > value.store_fixed_point);
}

//comparison <= operator
bool Fixed::operator<=(const Fixed &value) const
{
    return (this->store_fixed_point <= value.store_fixed_point);
}

//comparison >= operator
bool Fixed::operator>=(const Fixed &value) const
{
    return (this->store_fixed_point >= value.store_fixed_point);
}

//getter
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->store_fixed_point);
}

//setter
void Fixed::setRawBits( int const raw )
{
    this->store_fixed_point = raw;
}

//member function toFloat
float Fixed::toFloat( void ) const
{
    return ((float)this->store_fixed_point / (1 << Fixed::bits_num));
}

//member function toInt
int Fixed::toInt( void ) const
{
    return (this->store_fixed_point >> Fixed::bits_num);
}

//output stream operator
std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
    out << value.toFloat();
    return (out);
}

//arithmetic + operator
Fixed Fixed::operator+(const Fixed &value) const
{
    int result = this->getRawBits() + value.getRawBits();
    Fixed a;
    a.setRawBits(result);
    return (a);
}

//arithmetic - operator
Fixed Fixed::operator-(const Fixed &value) const
{
    int result = this->getRawBits() - value.getRawBits();
    Fixed a;
    a.setRawBits(result);
    return (a);
}

//arithmetic * operator
Fixed Fixed::operator*(const Fixed &value) const
{
    int result = (this->getRawBits() * value.getRawBits()) * std::pow(2, -Fixed::bits_num);
    Fixed a;
    a.setRawBits(result);
    return (a);
}

//arithmetic / operator
Fixed Fixed::operator/(const Fixed &value) const
{
    int result = (this->getRawBits() / value.getRawBits()) * std::pow(2, Fixed::bits_num);
    Fixed a;
    a.setRawBits(result);
    return (a);
}

//min function
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    return (b);
}

//const min function
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    return (b);
}

//max function
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    return (b);
}

//const max function
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    return (b);
}

//post increment operator
Fixed &Fixed::operator++(void)
{
    this->store_fixed_point++;
    return (*this);
}

//pre increment operator
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

//post decrement operator
Fixed &Fixed::operator--(void)
{
    this->store_fixed_point--;
    return (*this);
}

//pre decrement operator
Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}
