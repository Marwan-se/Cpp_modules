/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:50:49 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/07 16:51:50 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->Hit_point = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->Name = rhs.Name;
	this->Hit_point = rhs.Hit_point;
	this->Energy_points = rhs.Energy_points;
	this->Attack_damage = rhs.Attack_damage;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "Parameterized constructor called" << std::endl;
	this->Name = name;
	this->Hit_point = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << this->Name << " attack " << target << " causing " << this->Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " repaired for " << amount << " points of damage!" << std::endl;
}

int	ClapTrap::getHP() const
{
	return (this->Hit_point);
}

int	ClapTrap::getEP() const
{
	return (this->Energy_points);
}

std::string ClapTrap::getName() const
{
	return (this->Name);
}
