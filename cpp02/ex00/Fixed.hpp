/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:38:57 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/02 18:56:23 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FIXED_HPP
#define   FIXED_HPP

# include <iostream>
# include <string>

class   Fixed
{
    private:
        int store_fixed_point;
        static const int bits_num;
    public:
        Fixed();
        Fixed(const Fixed &value);
		Fixed &operator=(const Fixed &value);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif