/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:33:20 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/09 20:59:24 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <fstream>
#include <iostream>

void    valid_args()
{
    std::cerr << "Usage: ./btc [input]" << std::endl;
        exit(1);
}

void    valid_file()
{
    std::cerr << "Error: could not open file." << std::endl;
    exit(1);
}

int main(int ac, char **av)
{
    (void)av;
    BitcoinExchange btc;
    if (ac != 2)
        valid_args();
    std::ifstream input(av[1]);
    if (!input.is_open())
        valid_file();
    btc.parse_input(input);
}
