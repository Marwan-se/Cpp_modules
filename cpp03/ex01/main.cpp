/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:50:53 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/07 19:02:50 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap obj1;
    ScavTrap obj2("marwan");
    ScavTrap obj3(obj2);
    ScavTrap obj4 = obj3;

    obj1.attack("target");
    obj2.takeDamage(10);
    obj3.beRepaired(5);
    obj4.setName("Yuta");
    obj4.setHP(100);
    obj4.setEP(100);
    obj4.guardGate();

    std::cout << "HP: " << obj4.getHP() << std::endl;
    std::cout << "EP: " << obj4.getEP() << std::endl;
    std::cout << "Name: " << obj4.getName() << std::endl;
    
    return (0);
}