/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:30:41 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/07 16:45:50 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj1;
    ClapTrap obj2("marwan");
    ClapTrap obj3(obj2);
    ClapTrap obj4 = obj3;

    obj1.attack("target");
    obj2.takeDamage(10);
    obj3.beRepaired(5);
    std::cout << "HP: " << obj4.getHP() << std::endl;
    std::cout << "EP: " << obj4.getEP() << std::endl;
    std::cout << "Name: " << obj4.getName() << std::endl;
    return (0);
}
