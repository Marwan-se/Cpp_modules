/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:36:23 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/27 21:33:42 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>

std::stack<int> _myStack;

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
	{
		if (b == 0)
		{
			throw std::invalid_argument("Division by zero");
		}
		return (a / b);
	}
	return (0);
}


void	read_input(std::string input)
{
	int operands = 0;
	std::string ops = "+-*/";

	for (size_t i = 0; i < input.length(); i++)
	{
		if (isdigit(input[i]))
		{
			operands++;
			int num = atoi(&input[i]);
			if (num > 9)
			{
				throw std::invalid_argument("Invalid input");
			}
			_myStack.push(num);
		}
		else if (ops.find(input[i]) != std::string::npos)
		{
			if (operands < 2)
			{
				throw std::invalid_argument("Invalid input");
			}
			operands--;
			int n1 = _myStack.top();
			_myStack.pop();
			int n2 = _myStack.top();
			_myStack.pop();
			_myStack.push(evaluate(n2, n1, input[i]));
		}
	}
	if (_myStack.size() != 1)
	{
		throw std::invalid_argument("Invalid input");
	} 
	std::cout << _myStack.top() << std::endl;
}