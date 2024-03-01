/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:43:37 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/01 18:13:25 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>

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