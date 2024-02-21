#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class   RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
	/*----------------------- Orthodox Canonical Form -----------------------*/
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
		~RobotomyRequestForm();
	/*----------------------------------------------------------------------*/

	/*----------------------------- Member Functions -----------------------*/
		void		execute(Bureaucrat const &executor) const;
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

#endif
