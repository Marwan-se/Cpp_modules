/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:16:29 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/22 18:16:30 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class  PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
    /*----------------------- Orthodox Canonical Form -----------------------*/
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm(std::string const &target);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
        ~PresidentialPardonForm();
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