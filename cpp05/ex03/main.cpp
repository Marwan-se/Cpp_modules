/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:36:43 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/24 21:31:55 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <cstdlib>

int main()
{  
    AForm *rrf;
    try
    {
        Intern someRandomIntern;
        rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
        std::cout << *rrf << std::endl;

        Bureaucrat b("Bender", 1);
        b.signForm(*rrf);
        b.executeForm(*rrf);

        delete rrf;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    // try
    // {
    //     Intern someRandomIntern;
    //     rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    //     std::cout << *rrf << std::endl;

    //     Bureaucrat b("Bender", 1);
    //     b.signForm(*rrf);
    //     b.executeForm(*rrf);
    //     delete rrf;
    // }
    // catch (const std::exception& e)
    // {
    //     std::cout << "Exception caught: " << e.what() << std::endl;
    // }
    // try
    // {
    //     Intern someRandomIntern;
    //     rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
    //     std::cout << *rrf << std::endl;

    //     Bureaucrat b("Bender", 1);
    //     b.signForm(*rrf);
    //     b.executeForm(*rrf);
    //     delete rrf;
    // }
    // catch (const std::exception& e)
    // {
    //     std::cout << "Exception caught: " << e.what() << std::endl;
    // }

    return 0;
}

