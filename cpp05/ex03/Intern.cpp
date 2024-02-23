/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 02:02:31 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/23 22:58:09 by msekhsou         ###   ########.fr       */
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

AForm *Intern::makeForm(std::string const &form_name, std::string const &target)
{
    std::string form_name[3] = {"shrubbery creation", "presidential pardon", "robotomy request"};
    AForm *(*forms[3])(std::string const &target) = {CreateShr, CreatePres, CreateRobot};

    for (int i = 0; i < 3; i++)
    {
        if (formName == form_name[i])
        {
            std::cout << "Intern creates " << form_name << std::endl;
            return (forms[i](target));
        }
    }
    throw Intern::Formnf();
}