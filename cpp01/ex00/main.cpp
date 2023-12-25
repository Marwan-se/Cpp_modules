/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 10:03:19 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/25 10:03:20 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("Zombie1");
    zombie->announce();
    delete zombie;
    randomChump("Zombie2");
    return (0);
}
