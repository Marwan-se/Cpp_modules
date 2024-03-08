/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:24:58 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/08 18:34:37 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <map>
#include <stack>
#include <vector>


// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;

//     return 0;
// }

int main()
{
    std::vector<int> numbers(20);
    for (int i = 0; i < 20; ++i)
    {
        numbers[i] = i * 2;
    }
    try
    {
        Span sp = Span(20);
        sp.addNumber(numbers);
        std::cout << "Span updated" << std::endl;
        std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp.longestSpan() << std::endl;
        // sp.addNumber(1);
        sp.printnumbers();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
