/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:34:33 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/24 17:28:51 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>


int main()
{
    try
    {
        Bureaucrat bureaucrat("l9ayd", 80);
        std::cout << bureaucrat << std::endl;

        std::cout << "-----------------------------" << std::endl;

        Form form("Form A", 90, 80);
        std::cout << form << std::endl;

        std::cout << "-----------------------------" << std::endl;

        bureaucrat.signForm(form);

        std::cout << "-----------------------------" << std::endl;

        bureaucrat.IncrementGrade();
        std::cout << bureaucrat << std::endl;
        
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
