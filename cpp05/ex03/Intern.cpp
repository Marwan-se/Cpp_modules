/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 02:02:31 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/24 00:06:29 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &Copy)
{
    *this = Copy;
}

Intern &Intern::operator=(const Intern &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (*this);
}

AForm *Intern::CreatePres(std::string const &target)
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::CreateShr(std::string const &target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::CreateRobot(std::string const &target)
{
    return (new RobotomyRequestForm(target));
}

const char *Intern::Formnf::what() const throw()
{
    return ("Form not found: 404");
}

AForm *Intern::makeForm(std::string const &formName, std::string const &target)
{
    std::string forms[3] = {"ShrubberyCreationForm", "PresidentialPardonForm", "RobotomyRequestForm"};
    AForm* (Intern::*form[3])(std::string const &target) = { &Intern::CreateShr, &Intern::CreatePres, &Intern::CreateRobot };

    for (int i = 0; i < 3; i++)
    {
        if (formName == forms[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*form[i])(target);
        }
    }
    throw Formnf();
    return (NULL);
}
