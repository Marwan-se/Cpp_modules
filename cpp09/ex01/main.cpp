/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:36:26 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/27 21:34:09 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cstddef>

int main(int ac, char **av)
{
	if ( ac != 2)
	{
		std::cout << "Usage: ./RPN \"[RPN expression]\"" << std::endl;
		return (1);
	}
	std::string input = av[1];
	size_t found = input.find_first_not_of("0123456789+-*/ ");
	if (found != std::string::npos)
	{
		std::cout << "Invalid input" << std::endl;
		return (1);
	}
	try
	{
		read_input(input);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}