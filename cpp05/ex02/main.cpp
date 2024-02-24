/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:36:43 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/24 19:12:02 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <cstdlib>

void    leaks()
{
    system("leaks BureauCrat");
}

int main()
{

    atexit(leaks);
    AForm *shrubberyForm = new ShrubberyCreationForm("ohio");

    try
    {
        Bureaucrat bureaucrat("walu", 13);

        bureaucrat.signForm(*shrubberyForm);

        bureaucrat.executeForm(*shrubberyForm);
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    AForm *robotomyForm = new RobotomyRequestForm("ohio");

    try
    {
        Bureaucrat bureaucrat1("wahd", 40);

        bureaucrat1.signForm(*robotomyForm);

        bureaucrat1.executeForm(*robotomyForm);
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    AForm *presidentialForm = new PresidentialPardonForm("ohio");

    try
    {
        Bureaucrat bureaucrat2("juj", 4);

        bureaucrat2.signForm(*presidentialForm);

        bureaucrat2.executeForm(*presidentialForm);
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    delete shrubberyForm;
    delete robotomyForm;
    delete presidentialForm;

    return 0;
}
