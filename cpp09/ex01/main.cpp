/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:36:26 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/21 22:13:03 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN rpn;
	if ( ac != 2)
	{
		std::cout << "Usage: ./RPN \"[RPN expression]\"" << std::endl;
		return (1);
	}
	std::string input = av[1];

	try
	{
		rpn.read_input(input);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}