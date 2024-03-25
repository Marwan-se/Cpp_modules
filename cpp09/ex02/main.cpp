/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 03:43:30 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/25 01:24:09 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cctype>

void	ErrMsg()
{
	std::cerr << "Error" << std::endl;
	exit(1);
}

std::vector<std::size_t> checkAndParseParams(int argc, char **argv)
{
    std::vector<std::size_t> result;

    std::string str = "";
    for (int i = 1; i < argc; ++i)
	{
        std::string tmp = argv[i];
        str = str + tmp + " ";
    }
    std::istringstream inStream;
    inStream.str(str);
    
    std::string token;
    while (inStream >> token)
	{
        for (std::size_t j = 0; j < token.size(); ++j)
		{
            if (!isdigit(token[j]))
			{
				ErrMsg();
                return result;
            }
        }
        std::stringstream ss;
        ss << token;
        std::size_t num;
        ss >> num;
        result.push_back(num);
    }
    
    return result;
}



int main(int ac, char **av)
{
	if (ac < 2)
		ErrMsg();
	checkAndParseParams(ac, av);
    std::vector<int> vec;
    for (int i = 1; i < ac; ++i)
    {
        std::string tmp = av[i];
        vec.push_back(std::atoi(tmp.c_str()));
    }
    algorithm(vec);
}
