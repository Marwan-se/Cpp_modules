/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:49:02 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/12 18:29:40 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>

int main(int ac, char **av)
{
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for(int i = 1; i < ac; i++)
        {
            for(int j = 0; av[i][j]; j++)
                std::cout << (char)std::toupper(av[i][j]);
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
