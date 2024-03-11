/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:36:23 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/11 22:18:54 by msekhsou         ###   ########.fr       */
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

int	evaluate(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	else if (op == '*')
		return (a * b);
	else if (op == '/')
		return (a / b);
	return (0);
}

void	RPN::read_input(std::string input)
{
	size_t operands = 0;
	std::string ops = "+-*/";

	for (size_t i = 0; i < input.length(); i++)
	{
		if (isdigit(input[i]))
		{
			operands++;
			int num = atoi(&input[i]);
			if (num > 9)
			{
				std::cout << "Invalid input" << std::endl;
				exit(1);
			}
			_myStack.push(atoi(&input[i]));
		}
		else if (ops.find(input[i]) != std::string::npos)
		{
			if (operands < 2)
			{
				std::cout << "Not enough operands" << std::endl;
				exit(1);
			}
			operands--;
			int n1 = _myStack.top();
			_myStack.pop();
			int n2 = _myStack.top();
			_myStack.pop();
			_myStack.push(evaluate(n2, n1, input[i]));
		}
	}
	std::cout << _myStack.top() << std::endl;
}