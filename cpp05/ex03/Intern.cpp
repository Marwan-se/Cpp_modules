/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 02:02:31 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/23 21:33:41 by msekhsou         ###   ########.fr       */
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