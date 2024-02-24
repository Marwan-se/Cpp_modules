/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 01:34:41 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/24 17:29:48 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/*-------------------------- Constructors & Destructors ----------------------*/

Form::Form() : name("default"), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "Form Default Constructor called" << std::endl;
    sign = false;
}

Form::Form(std::string const &name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    // std::cout << "Form Parametric Constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    sign = false;
}

Form::~Form()
{
    // std::cout << "Form Destructor called" << std::endl;
}

/*---------------------------- Copy & Assignation ----------------------------*/

Form::Form(const Form &copy) : name(copy.name), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute)
{
    std::cout << "Form Copy Constructor called" << std::endl;
    sign = copy.sign;
}

Form &Form::operator=(const Form &rhs)
{
    std::cout << "Form Assignation Operator called" << std::endl;
    if (this != &rhs)
        sign = rhs.sign;
    return *this;
}

/*----------------------------- Member Functions -----------------------------*/

std::string Form::getName() const
{
    return name;
}

bool Form::getSign() const
{
    return sign;
}

int Form::getGradeToSign() const
{
    return gradeToSign;
}

int Form::getGradeToExecute() const
{
    return gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw Form::GradeTooLowException();
    sign = true;
}

/*--------------------------- Nested Classes Functions ----------------------*/

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form Exception: Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form Exception: Grade is too low";
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form: " << form.getName() << " | Grade to sign: " << form.getGradeToSign() << " | Grade to execute: " << form.getGradeToExecute() << " | Sign: " << form.getSign();
    return out;
} 