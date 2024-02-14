/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:37:15 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/14 22:46:46 by msekhsou         ###   ########.fr       */
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
    /*---------------------- Orthodox Canonical Form ----------------------*/
        Bureaucrat();
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat();
        Bureaucrat &operator=(Bureaucrat const &src);
    /*---------------------------------------------------------------------*/

    /*-------------------------- Member Function --------------------------*/
        std::string const &getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
    /*---------------------------------------------------------------------*/
    
    /*-------------------------- Nested Class -----------------------------*/
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
    /*---------------------------------------------------------------------*/
};

#endif