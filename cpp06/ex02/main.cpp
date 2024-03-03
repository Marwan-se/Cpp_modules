/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:01:07 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/03 15:42:20 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>
#include <stdexcept>

Base *generate(void)
{
	srand(time(0));
	int random = rand() % 3;
	switch (random)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			throw std::runtime_error("failed to generate an instance");
	}
}

void    indentify(Base *p)
{
	if (dynamic_cast<A*>(p) != 0)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != 0)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != 0)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown typpe" << std::endl;
}

void    indentify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast &e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast &e)
			{
				std::cout << "Unknown type" << std::endl;
			}
		}
	}
}

int main()
{
	Base *base = generate();
	indentify(base);
	indentify(*base);
	delete base;
	return (0);
}
