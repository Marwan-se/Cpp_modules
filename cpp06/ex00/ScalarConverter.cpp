/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:50:07 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/01 18:49:56 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

// void    check_syntax(std::string str)
// {
//     if (str.length() == 1 && !isdigit(str[0]))
//     {
//         std::cout << "char: " << str[0] << std::endl;
//         std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
//         std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
//         std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
//     }
//     else if (str.length() == 1 && isdigit(str[0]))
//     {
//         std::cout << "char: " << static_cast<char>(str[0]) << std::endl;
//         std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
//         std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
//         std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
//     }
//     else if (str.length() > 1 && str[0] == '-' && isdigit(str[1]))
//     {
//         std::cout << "char: " << static_cast<char>(std::stoi(str)) << std::endl;
//         std::cout << "int: " << std::stoi(str) << std::endl;
//         std::cout << "float: " << std::stof(str) << "f" << std::endl;
//         std::cout << "double: " << std::stod(str) << std::endl;
//     }
//     else if (str.length() > 1 && isdigit(str[0]))
//     {
//         std::cout << "char: " << static_cast<char>(std::stoi(str)) << std::endl;
//         std::cout << "int: " << std::stoi(str) << std::endl;
//         std::cout << "float: " << std::stof(str) << "f" << std::endl;
//         std::cout << "double: " << std::stod(str) << std::endl;
//     }
//     else
//         std::cout << "Invalid input" << std::endl;
// }

void    ScalarConverter::convert(const std::string &str)
{
    if (str.length() == 1 && !isdigit(str[0]))
    {
        std::cout << "char: " << str[0] << std::endl;
        std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
    }
    else if (str.length() == 1 && isdigit(str[0]))
    {
        std::cout << "char: " << static_cast<char>(str[0]) << std::endl;
        std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
    }
    else if (str.length() > 1 && str[0] == '-' && isdigit(str[1]))
    {
        std::cout << "char: " << static_cast<char>(std::stoi(str)) << std::endl;
        std::cout << "int: " << std::stoi(str) << std::endl;
        std::cout << "float: " << std::stof(str) << "f" << std::endl;
        std::cout << "double: " << std::stod(str) << std::endl;
    }
    else if (str.length() > 1 && isdigit(str[0]))
    {
        std::cout << "char: " << static_cast<char>(std::stoi(str)) << std::endl;
        std::cout << "int: " << std::stoi(str) << std::endl;
        std::cout << "float: " << std::stof(str) << "f" << std::endl;
        std::cout << "double: " << std::stod(str) << std::endl;
    }
    else
        std::cout << "Invalid input" << std::endl;
}