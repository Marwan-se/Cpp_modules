/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:36:43 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/24 21:22:06 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{    
    try
    {
        Intern someRandomIntern;
        AForm *rrf;
        rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
        std::cout << *rrf << std::endl;

        Bureaucrat b("Bender", 1);
        b.signForm(*rrf);
        b.executeForm(*rrf);
        
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
