/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 03:43:30 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/27 21:36:59 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cctype>

int main(int ac, char **av)
{
    try
    {
        checkErrors(ac, av);
    }
    catch (std::invalid_argument &e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    std::vector<int> vec;
    std::deque<int> deq;
    std::cout << "Before: ";
    for (int i = 1; i < ac; ++i)
        std::cout << av[i] << " ";
    std::cout << std::endl;
    for (int i = 1; i < ac; ++i)
    {
        std::string tmp = av[i];
        vec.push_back(std::atoi(tmp.c_str()));
    }
    for (int i = 1; i < ac; ++i)
    {
        std::string tmp = av[i];
        deq.push_back(std::atoi(tmp.c_str()));
    }
    algorithm_Vec(vec);
    algorithm_Deq(deq);

}
