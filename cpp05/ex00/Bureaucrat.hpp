/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:37:15 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/13 17:55:04 by msekhsou         ###   ########.fr       */
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

    /*---------------------- Member Function ----------------------*/
        std::string const &getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
};

#endif