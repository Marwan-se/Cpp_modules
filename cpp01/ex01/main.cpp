/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:10:39 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/21 15:40:06 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int i = 0;
    int N = 5;
    Zombie *zombies = zombieHorde(N, "meriem");
    while (i < N)
    {
        zombies[i].announce();
        i++;
    }
    delete [] zombies;
    return (0);
}