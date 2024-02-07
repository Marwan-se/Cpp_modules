/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:50:59 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/07 20:07:36 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->Hit_point = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Parameterized constructor called" << std::endl;
    this->Hit_point = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &value) : ClapTrap(value)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = value;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->Name = rhs.Name;
        this->Hit_point = rhs.Hit_point;
        this->Energy_points = rhs.Energy_points;
        this->Attack_damage = rhs.Attack_damage;
    }
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->Energy_points > 0)
    {
        std::cout << "ScavTrap " << this->Name << " attack " << target << " causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_points--;
    }
    std::cout << "ScavTrap " << this->Name << " no energy :( " << std::endl;
}
