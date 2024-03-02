/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:50:07 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/02 18:30:06 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

/*-------------------------- Constructors -------------------------*/

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) 
{
	*this = copy;
}

ScalarConverter::~ScalarConverter(){}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

/*-------------------------- Member Functions -------------------------*/

int	handleSpecials(const std::string &input)
{
	std::string imp_char[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	int i = 0;
	std::string impossi = "impossible";
	while (i < 6)
	{
		if (input == imp_char[i])
		{
			std::cout << "char: " << impossi << std::endl;
			std::cout << "int: " << impossi << std::endl;
			std::cout << "float: " << input << std::endl;
			std::cout << "double: " << input << std::endl;
			return 1;
		}
		i++;
	}
	return 0;
}

void	ScalarConverter::convert(const std::string &input)
{
	if (handleSpecials(input))
		return ;
	else if (!isdigit(input[0]) && input.length() == 1 )
	{
		if (isprint(input[0]))
			std::cout << "char: '" << input[0] << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
	}
	
}
