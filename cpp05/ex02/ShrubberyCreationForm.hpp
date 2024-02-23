/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:03:08 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/23 23:13:48 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
    /*----------------------- Orthodox Canonical Form -----------------------*/
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm(std::string const &target);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
        ~ShrubberyCreationForm();
    /*----------------------------------------------------------------------*/

    /*----------------------------- Member Functions -----------------------*/
		void	execute(Bureaucrat const &) const;
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
