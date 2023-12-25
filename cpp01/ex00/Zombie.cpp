/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 10:03:38 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/25 10:30:29 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout  << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void)
{
    return (name);
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie destroyed" << std::endl;
}

Zombie::Zombie()
{
}