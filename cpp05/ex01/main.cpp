/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:34:33 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/18 21:47:32 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat bureaucrat("person", 150);
        std::cout << bureaucrat << std::endl;

        Form form("Form A", 90, 80);
        std::cout << form << std::endl;

        bureaucrat.signForm(form);
        std::cout << form << std::endl;

        bureaucrat.IncrementGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat.signForm(form);
        std::cout << form << std::endl;

        Bureaucrat b2("person2", 10);
        b2.signForm(form);

        b2.DecrementGrade();
        std::cout << b2 << std::endl;
        
        b2.signForm(form);
        std::cout << form << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
