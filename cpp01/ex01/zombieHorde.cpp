/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:08:21 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/21 15:38:23 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    if(N < 0)
        return (NULL);
    Zombie *zombies = new Zombie[N];
    while (i < N)
    {
        zombies[i].setName(name);
        i++;
    }
    return (zombies);
}