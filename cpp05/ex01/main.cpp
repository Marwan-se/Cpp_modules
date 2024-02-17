/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:34:33 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/17 01:28:04 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cstdio>


int main()
{
    try
    {
        Bureaucrat br1("person", 100);
        std::cout << br1 << std::endl;

        // Increment the grade
        br1.IncrementGrade();
        std::cout << br1 << std::endl;

        // Try to increment the grade beyond the maximum allowed grade (should throw an exception)
        br1.IncrementGrade();
        std::cout << br1 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat br2("Jane Smith", 150);
        std::cout << br2 << std::endl;

        // Decrement the grade
        br2.DecrementGrade();
        std::cout << br2 << std::endl;

        // Try to decrement the grade beyond the minimum allowed grade (should throw an exception)
        br2.DecrementGrade();
        std::cout << br2 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        // Try to create a Bureaucrat with an invalid grade (too high)
        Bureaucrat br3("Invalid1", 0);
        std::cout << br3 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        // Try to create a Bureaucrat with an invalid grade (too low)
        Bureaucrat br4("Invalid2", 200);
        std::cout << br4 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}