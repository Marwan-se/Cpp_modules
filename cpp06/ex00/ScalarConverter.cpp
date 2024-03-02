/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:50:07 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/02 23:13:07 by msekhsou         ###   ########.fr       */
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

int	num_type(const std::string &input)
{
	int i = 0;
	int f_flag = 0;
	int dot = 0;
	if (input[i] == '+' || input[i] == '-')
		i++;
	while (input[i])
	{
		if (input[i] == 'f')
			f_flag++;
		if (input[i] == '.')
			dot++;
		if ((!isdigit(input[i]) && input[i] != 'f' && input[i] != '.') || f_flag > 1 || dot > 1)
			return 0;
		i++;
	}
	if (!input[i] && f_flag == 0 && dot == 0 && atoi(input.c_str()) >= INT_MIN && atoi(input.c_str()) <= INT_MAX)
		return isInt;
	if (input[input.length() - 1] == 'f' && dot == 1)
		return isFloat;
	else if (f_flag == 0)
		return isDouble;
	return 0;
}

void	convert_int(const std::string &input)
{
	long long i = atoll(input.data());
	std::cout << "char: ";
	if (isprint(i))
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	if (i > INT_MAX || i < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	convert_float(const std::string &input)
{
	double f = atof(input.c_str());
	std::cout << f << std::endl;
	std::cout << "char: ";
	if (isprint(f))
		std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	if (f > INT_MAX || f < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (f == static_cast<int>(f))
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << f << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << f << std::endl;
	}
}

void	convert_double(const std::string &input)
{
	double d = atof(input.data());
	std::cout << "char: ";
	if (isprint(d))
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (d == static_cast<int>(d))
	{
		std::cout << "float: " << d << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << d << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
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
	else if (num_type(input) == isInt)
		convert_int(input);
	else if (num_type(input) == isFloat)
		convert_float(input);
	else if (num_type(input) == isDouble)
		convert_double(input);
	else
		std::cout << "Invalid input" << std::endl;
	
}
