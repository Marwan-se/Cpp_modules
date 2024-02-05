/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:29:22 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/05 00:18:59 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FIXED_HPP
#define   FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class   Fixed
{
    private:
        int store_fixed_point;
        static const int bits_num;
    public:
        //default constructor
        Fixed();
        //int constructor
        Fixed(const int value);
        //float constructor
        Fixed(const float value);
        //copy constructor
        Fixed(const Fixed &value);
        //assignment operator
		Fixed &operator=(const Fixed &value);
        //comparison operators 6
        bool operator==(const Fixed &value) const;
        bool operator>(const Fixed &value) const;
        bool operator<(const Fixed &value) const;
        bool operator>=(const Fixed &value) const;
        bool operator<=(const Fixed &value) const;
        bool operator!=(const Fixed &value) const;
        //arithmetic operators 4
        Fixed operator+(const Fixed &value) const;
        Fixed operator-(const Fixed &value) const;
        Fixed operator*(const Fixed &value) const;
        Fixed operator/(const Fixed &value) const;
        //increment / decrement operators 4
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);
        //min function
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        //max function
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        //destructor
        ~Fixed();
        //member functions
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif
