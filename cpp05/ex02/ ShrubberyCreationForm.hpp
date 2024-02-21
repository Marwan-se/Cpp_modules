/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:03:08 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/21 17:04:04 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class  ShrubberyCreationForm : public AForm
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