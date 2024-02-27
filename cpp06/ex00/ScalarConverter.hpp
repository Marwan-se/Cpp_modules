/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:43:37 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/26 20:42:55 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

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
		void	convert(std::string str);
		void	printChar();
		void	printInt();
		void	printFloat();
		void	printDouble();
	/*---------------------------------------------------------------------*/
		
};

#endif