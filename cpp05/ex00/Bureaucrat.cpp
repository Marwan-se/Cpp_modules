/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:36:59 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/17 01:02:54 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*------------------------ Constructors and Destructors ---------------------*/

Bureaucrat::Bureaucrat() : name("Default")
{
    std::cout << "Default constructor called" << std::endl;
    grade = 150;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name)
{
    std::cout << "Parametric constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

/*-------------------------- Copy & assignement -------------------------*/

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    std::cout << "Assignement operator called" << std::endl;
    if (this != &rhs)
        this->grade = rhs.grade;
    return *this;
}

/*-------------------------- Member Functions -------------------------*/

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::IncrementGrade()
{
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::DecrementGrade()
{
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

/*-------------------------- Nested Classes -------------------------*/

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

/*-------------------------- Non-member Functions -------------------------*/

std::ostream &operator<<(std::ostream &out, const Bureaucrat &value)
{
    out << value.getName() << ", bureaucrat grade " << value.getGrade();
    return out;
}
    