/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:36:56 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/23 23:20:25 by msekhsou         ###   ########.fr       */
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

void	ShrubberyCreationForm::execute(const Bureaucrat &) const
{
    std::ofstream filename;
    std::string file = this->target + "_shrubbery";
    filename.open(file.c_str());
    
    if (!filename.is_open())
        std::cerr << "Error: could not open file." << std::endl;
    else
    {
        filename << "            #### ####" << std::endl;
        filename << "        ### \\/#|### |/####" << std::endl;
        filename << "       ##\\/#/ \\||/##/_/##/_#" << std::endl;
        filename << "     ###  \\/###|/ \\/ # ###" << std::endl;
        filename << "   ##_\\_#\\_\\## | #/###_/_####" << std::endl;
        filename << "  ## #### # \\ #| /  #### ##/##" << std::endl;
        filename << "   __#_--###`  |{,###---###-~" << std::endl;
        filename << "             \\ }{" << std::endl;
        filename << "              }}{" << std::endl;
        filename << "              }}{" << std::endl;
        filename << "         ejm  {{}" << std::endl;
        filename << "        ,-=-~{ .-^- _" << std::endl;
        filename << "             `{{}}" << std::endl;
        filename << "             {{{}}}" << std::endl;
        filename << "\n";

        std::cout << "File " << this->target << "_shrubbery created." << std::endl;
    }

	filename.close();
}

