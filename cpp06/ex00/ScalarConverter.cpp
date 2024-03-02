/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:50:07 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/02 13:08:55 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <string>

/*-------------------------- Constructors -------------------------*/

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

/*-------------------------- Member Functions -------------------------*/

int	parseNumber(const std::string &input)
{
	int i = 0;
	int dot = 0;
	int f_flag = 0;
	long long number = atoll(input.data());
	std::string imp = "impossible";
	if (input[i] == '+' || input[i] == '-')
		i++;
	while (input[i])
	{
		if (input[i] == '.')
			dot++;
		if (input[i] == 'f')
			f_flag++;
		if (!isdigit(input[i]) && input[i] != '.' && input[i] != 'f' || dot > 1 || f_flag > 1)
			return (std::cerr << "Error: Invalid input" << std::endl, 1);
		i++;
	}
	if (!input[i + 1] && f_flag == 0 && dot == 0 && atoll(input.data()) >= INT_MAX \
		&& atoll(input.data()) <= INT_MIN)
	{
		if (static_cast<char>(number) >= 0 && static_cast<char>(number) <= 31)
			std::cout << "char: Non displayable" << std::endl;
		else if (!isascii(static_cast<char>(number)))
			std::cout << "char: " << imp << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
		if (number > INT_MAX || number < INT_MIN)
			std::cout << "int: " << imp << std::endl;
		else
			std::cout << "int: " << number << std::endl;
		std::cout << "float: " << number << ".0f" << std::endl;
		std::cout << "double: " << number << ".0" << std::endl;
	}
}

void	ScalarConverter::convert(const std::string &input)
{
	std::string imp_char[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	int i = 0;
	std::string impossi = "impossible";
	while (i < 6)
	{
		if (input == imp_char[i])
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << input << std::endl;
			std::cout << "double: " << input << std::endl;
			return;
		}
		i++;
	}
	if (input.length() == 1 && !isdigit(input[1]))
	{
		if (isprint(input[0]))
			std::cout << "char: '" << input[0] << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
	}
	parseNumber(input);
	i = 0;
	
}