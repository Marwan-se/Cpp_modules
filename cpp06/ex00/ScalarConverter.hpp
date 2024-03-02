/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:43:37 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/02 12:21:22 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <limits.h>




class	ScalarConverter
{
	private:
	/*--------------------- Orthodox Canonical Form ----------------------*/
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &rhs);
	/*---------------------------------------------------------------------*/

	public:
	/*-------------------------- Member Functions -------------------------*/
		static void convert(const std::string &str);
	/*---------------------------------------------------------------------*/
		
};

#endif