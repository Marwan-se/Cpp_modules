/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:49:35 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/02 00:32:16 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "./convert [value]" << std::endl;
        return (1);
    }

    ScalarConverter::convert(av[1]);
}