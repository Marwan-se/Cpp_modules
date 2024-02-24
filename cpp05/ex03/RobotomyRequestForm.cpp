/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:16:34 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/24 19:08:51 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
	*this = copy;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
		this->target = rhs.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &execute) const
{
	(void)execute;
	srand(time(NULL));
	if (rand() % 2)
	{
		std::cout << "DZZZZZZZZZZZZZZZZZZ" << std::endl;
		std::cout << "VZZZZZZZZZZZZZZZZZZZ" << std::endl;
		std::cout << "BZZZZZZZZZZZZZZZZZZZ" << std::endl;
		std::cout << this->target << " has been robotomized successfully." << std::endl;
	}
	else
		std::cout << "Robotomization failed." << std::endl;
}
