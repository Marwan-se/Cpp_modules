/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 02:02:31 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/23 22:54:11 by msekhsou         ###   ########.fr       */
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

AForm *CreateShr(std::string const &target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *CreatePres(std::string const &target)
{
    return (new PresidentialPardonForm(target));
}

AForm *CreateRobot(std::string const &target)
{
    return (new RobotomyRequestForm(target));
}

const char *Intern::Formnf::what() const throw()
{
    return ("Form not found: 404");
}

AForm *Intern::makeForm(std::string const &formName, std::string const &target)
{
    std::string formNames[3] = {"shrubbery creation", "presidential pardon", "robotomy request"};
    AForm *(*formCreators[3])(std::string const &target) = {CreateShr, CreatePres, CreateRobot};

    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (formCreators[i](target));
        }
    }
    throw Intern::Formnf();
}