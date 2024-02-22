/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:36:43 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/22 23:57:24 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main() {
    // Create a Bureaucrat
    Bureaucrat bureaucrat("John", 120);

    try {
        // Create different forms
        ShrubberyCreationForm shrubberyForm("garden");
        RobotomyRequestForm robotomyForm("RoboCop");
        PresidentialPardonForm pardonForm("Alice");

        // Try signing the forms with the bureaucrat
        bureaucrat.signForm(shrubberyForm);
        bureaucrat.signForm(robotomyForm);
        bureaucrat.signForm(pardonForm);

        // Try executing the forms
        shrubberyForm.execute(bureaucrat);
        robotomyForm.execute(bureaucrat);
        pardonForm.execute(bureaucrat);
    } catch (const std::exception& e) {
        // Handle any exceptions that may occur
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
