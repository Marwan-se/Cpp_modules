/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:37:15 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/16 16:19:26 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <exception>

class Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
	/*----------------------- Orthodox Canonical Form -----------------------*/
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		~Bureaucrat();
	/*----------------------------------------------------------------------*/

	/*----------------------------- Member Functions -----------------------*/
		std::string getName() const;
		int			getGrade() const;
		void	IncrementGrade();
		void	DecrementGrade();
	/*----------------------------------------------------------------------*/

	/*--------------------------- Nested Classes ---------------------------*/
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	/*----------------------------------------------------------------------*/
};


#endif