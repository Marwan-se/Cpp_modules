/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:50:53 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/07 19:12:08 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap obj2("marwan");
    FragTrap obj3(obj2);
    FragTrap obj4 = obj3;

    obj2.attack("target");
    obj2.takeDamage(10);
    obj3.beRepaired(5);
    obj4.setName("Yuta");
    obj4.setHP(100);
    obj4.setEP(100);
    obj4.highFivesGuys();
    
}