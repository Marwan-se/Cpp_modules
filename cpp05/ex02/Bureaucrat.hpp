/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:37:15 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/22 17:34:17 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
#include <ostream>
# include <string>
#include <exception>
# include "AForm.hpp"

class Form;
class Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
	/*----------------------- Orthodox Canonical Form -----------------------*/
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		~Bureaucrat();
	/*----------------------------------------------------------------------*/

	/*----------------------------- Member Functions -----------------------*/
		std::string getName() const;
		int			getGrade() const;
		void	IncrementGrade();
		void	DecrementGrade();
		void	signForm(AForm &form);
		void	executeForm(AForm const &form);
	/*----------------------------------------------------------------------*/

	/*--------------------------- Nested Classes ---------------------------*/
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	/*----------------------------------------------------------------------*/
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &value);

#endif