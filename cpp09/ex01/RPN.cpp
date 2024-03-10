/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:36:23 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/10 08:19:29 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN::~RPN()
{
}

RPN &RPN::operator=(const RPN &copy)
{
	(void)copy;
	return (*this);
}

/*-------------------------------------------------------------*/

void	RPN::parse_input(std::string str)
{
	std::cout << str << std::endl;
	
}