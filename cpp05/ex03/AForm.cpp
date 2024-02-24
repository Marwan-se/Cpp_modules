/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:00:32 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/24 17:35:29 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/*-------------------------- Constructors & Destructors ----------------------*/

AForm::AForm() : name("default"), gradeToSign(150), gradeToExecute(150)
{
    // std::cout << "AForm Default Constructor called" << std::endl;
    sign = false;
}

AForm::AForm(std::string const &name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    // std::cout << "AForm Parametric Constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    sign = false;
}

AForm::~AForm()
{
    // std::cout << "AForm Destructor called" << std::endl;
}

/*---------------------------- Copy & Assignation ----------------------------*/

AForm::AForm(const AForm &copy) : name(copy.name), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute)
{
    // std::cout << "AForm Copy Constructor called" << std::endl;
    sign = copy.sign;
}

AForm &AForm::operator=(const AForm &rhs)
{
    // std::cout << "AForm Assignation Operator called" << std::endl;
    if (this != &rhs)
        sign = rhs.sign;
    return *this;
}

/*----------------------------- Member Functions -----------------------------*/

std::string AForm::getName() const
{
    return name;
}

bool AForm::getSign() const
{
    return sign;
}

int AForm::getGradeToSign() const
{
    return gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return gradeToExecute;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw AForm::GradeTooLowException();
    sign = true;
}

/*--------------------------- Nested Classes Functions ----------------------*/

const char *AForm::GradeTooHighException::what() const throw()
{
    return "AForm Exception: Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "AForm Exception: Grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return "AForm Exception: Form is not signed";
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
    out << "AForm: " << form.getName() << ", Sign: " << form.getSign() << ", Grade to sign: " << form.getGradeToSign() << ", Grade to execute: " << form.getGradeToExecute();
    return out;
}
