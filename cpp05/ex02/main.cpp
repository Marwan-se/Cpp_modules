/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:36:43 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/23 23:25:42 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
    Bureaucrat bureaucrat("walu", 10);

    try
    {
        ShrubberyCreationForm shrubberyForm("ohio");

        bureaucrat.signForm(shrubberyForm);

        shrubberyForm.execute(bureaucrat);
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    Bureaucrat bureaucrat1("wahd", 10);
    try
    {
        RobotomyRequestForm robotomyForm("ohio");

        bureaucrat1.signForm(robotomyForm);

        robotomyForm.execute(bureaucrat);
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    Bureaucrat bureaucrat2("juj", 10);
    try
    {
        PresidentialPardonForm presidentialForm("ohio");

        bureaucrat2.signForm(presidentialForm);

        presidentialForm.execute(bureaucrat);
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
