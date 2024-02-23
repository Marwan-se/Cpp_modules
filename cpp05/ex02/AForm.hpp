/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:00:06 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/23 23:22:52 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private:
		std::string const name;
		bool sign;
		int const gradeToSign;
		int const gradeToExecute;
	public:

	/*----------------------- Orthodox Canonical Form -----------------------*/
		AForm();
		AForm(const AForm &copy);
		AForm(std::string const &name, int gradeToSign, int gradeToExecute);
		AForm &operator=(const AForm &rhs);
		virtual ~AForm();
	/*----------------------------------------------------------------------*/

	/*----------------------------- Member Functions -----------------------*/
		std::string 	getName() const;
		bool			getSign() const;
		int				getGradeToSign() const;
		int				getGradeToExecute() const;
		void			beSigned( Bureaucrat &bureaucrat);
	/*----------------------------------------------------------------------*/
	
	/*----------------------------- Pure virtual -----------------------*/
		virtual void	execute(Bureaucrat const &executor) const = 0;
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

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif
