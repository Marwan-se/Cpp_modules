/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:36:43 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/23 23:01:00 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
    Bureaucrat bureaucrat("pp", 10);

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
    try
    {
        RobotomyRequestForm robotomyForm("ohio");

        bureaucrat.signForm(robotomyForm);

        robotomyForm.execute(bureaucrat);
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    try
    {
        PresidentialPardonForm presidentialForm("ohio");

        bureaucrat.signForm(presidentialForm);

        presidentialForm.execute(bureaucrat);
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
