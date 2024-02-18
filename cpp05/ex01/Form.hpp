/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 01:34:44 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/18 21:47:53 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		std::string const name;
		bool sign;
		int const gradeToSign;
		int const gradeToExecute;
	public:
	/*----------------------- Orthodox Canonical Form -----------------------*/
		Form();
		Form(const Form &copy);
		Form(std::string const &name, int gradeToSign, int gradeToExecute);
		Form &operator=(const Form &rhs);
		~Form();
	/*----------------------------------------------------------------------*/

	/*----------------------------- Member Functions -----------------------*/
		std::string getName() const;
		bool		getSign() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void		beSigned(Bureaucrat &bureaucrat);
	/*----------------------------------------------------------------------*/

	public:
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

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif