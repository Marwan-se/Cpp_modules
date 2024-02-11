/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:09:11 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 22:39:28 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"

/*---------------------- Constructors & Destructors ----------------------*/

Character::Character()
{
    std::cout << "Character default constructor called" << std::endl;
    this->name = "default";
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string name)
{
    std::cout << "Character constructor called" << std::endl;
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

/*-------------------------- Copy && Assignation --------------------------*/

//copy constructor with deep copy
Character::Character(const Character &copy)
{
    std::cout << "Character copy constructor called" << std::endl;
    this->name = copy.name;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
        if (copy.inventory[i])
            this->inventory[i] = copy.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
}

Character &Character::operator=(const Character &rhs)
{
    std::cout << "Character assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->name = rhs.name;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
        if (rhs.inventory[i])
            this->inventory[i] = rhs.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
    return (*this);
}

/*----------------------------- Member Functions -----------------------*/

std::string const &Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* add)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = add;
            return ;
        }
    }
}

void Character::unequip(int index)
{
    if (index < 0 || index > 3 || !this->inventory[index])
        return ;
    MateriaSource tmp;
    tmp.learnMateria(this->inventory[index]);
    this->inventory[index] = NULL;
}

void Character::use(int index, ICharacter& target)
{
    if (index < 0 || index > 3 || !this->inventory[index])
        return ;
    this->inventory[index]->use(target);
}
