/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:07:13 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/04 23:32:31 by msekhsou         ###   ########.fr       */
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
        //destructor
        ~Fixed();
        //getters and setters
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        //converters
        float toFloat( void ) const;
        int toInt( void ) const;
};

//overload << operator
std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif