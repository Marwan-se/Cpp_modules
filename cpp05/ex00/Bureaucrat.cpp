/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:36:59 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/16 18:11:34 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <ostream>
#include <string>

/*------------------------ Constructors and Destructors ---------------------*/

Bureaucrat::Bureaucrat() : name("default")
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name)
{
    std::cout << "parameterized Bureaucrat constructor called" << std::endl;
    this->grade = grade;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

/*----------------------- Copy constructor and Assignation ------------------*/

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    std::cout << "Bureaucrat assignation operator called" << std::endl;
    if (this == &rhs)
        return *this;
    this->grade = rhs.grade;
    return *this;
}

/*-------------------------- Member Functions --------------------------------*/

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void    Bureaucrat::IncrementGrade()
{
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::DecrementGrade()
{
    if (this->grade + 1 > 150)  
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

/*-------------------------- Nested Classes ---------------------------------*/

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

/*-------------------------- Operator Overloading ----------------------------*/

std::ostream &operator<<(std::ostream &out, const Bureaucrat &value)
{
    out << value.getName() << ", bureaucrat grade " << value.getGrade() << std::endl;
    return out;
}