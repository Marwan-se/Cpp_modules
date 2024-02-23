/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:36:56 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/23 00:32:11 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
	*this = copy;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		this->target = rhs.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    (void)executor;
    std::ofstream file;
	file.open(this->target + "_shrubbery");
    if (!file.is_open())
        std::cerr << "Error: could not open file." << std::endl;
	file << "            #### ####" << std::endl;
    file << "        ### \\/#|### |/####" << std::endl;
    file << "       ##\\/#/ \\||/##/_/##/_#" << std::endl;
    file << "     ###  \\/###|/ \\/ # ###" << std::endl;
    file << "   ##_\\_#\\_\\## | #/###_/_####" << std::endl;
    file << "  ## #### # \\ #| /  #### ##/##" << std::endl;
    file << "   __#_--###`  |{,###---###-~" << std::endl;
    file << "             \\ }{" << std::endl;
    file << "              }}{" << std::endl;
    file << "              }}{" << std::endl;
    file << "         ejm  {{}" << std::endl;
    file << "        ,-=-~{ .-^- _" << std::endl;
    file << "             `{{}}" << std::endl;
    file << "             {{{}}}" << std::endl;
    file << "\n";

	std::cout << "File " << this->target << "_shrubbery created." << std::endl;
	file.close();
}

