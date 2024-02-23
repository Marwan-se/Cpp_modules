/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 02:02:35 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/23 22:50:57 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
	public:
	/*--------------------- Orthodox Canonical Form ---------------------------*/
		Intern();
		~Intern();
		Intern(const Intern &Copy);
		Intern &operator=(const Intern &rhs);
	/*--------------------------------------------------------------------------*/

	/*-------------------------- Member Functions -----------------------------*/
		AForm *makeForm(std::string const &formName, std::string const &target);
		AForm *CreateShr(std::string const &target);
		AForm *CreatePres(std::string const &target);
		AForm *CreateRobot(std::string const &target);
	/*--------------------------------------------------------------------------*/

	/*------------------------------- Exceptions ------------------------------*/
		class Formnf : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	/*--------------------------------------------------------------------------*/
};



#endif
