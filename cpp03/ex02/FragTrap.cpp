/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:07:14 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/07 20:08:31 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->Hit_point = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Parameterized constructor called" << std::endl;
    this->Name = name;
    this->Hit_point = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &value)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = value;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "FragTrap Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->Name = rhs.Name;
        this->Hit_point = rhs.Hit_point;
        this->Energy_points = rhs.Energy_points;
        this->Attack_damage = rhs.Attack_damage;
    }
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap is requesting a high five" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (this->Energy_points > 0)
    {
        std::cout << "FragTrap " << this->Name << " attack " << target << " causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_points--;
    }
    std::cout << "FragTrap " << this->Name << " no energy :( " << std::endl;
}