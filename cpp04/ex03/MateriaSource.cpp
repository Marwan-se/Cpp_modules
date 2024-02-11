/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:08:54 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 22:22:04 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*---------------------- Constructors & Destructors -----------------------*/

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->LearnedMateria[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->LearnedMateria[i])
            delete this->LearnedMateria[i];
    }
}

/*-------------------------- Copy && Assignation --------------------------*/

//copy constructor with deep copy

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (copy.LearnedMateria[i])
            this->LearnedMateria[i] = copy.LearnedMateria[i]->clone();
        else
            this->LearnedMateria[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    std::cout << "MateriaSource assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    for (int i = 0; i < 4; i++)
    {
        if (this->LearnedMateria[i])
            delete this->LearnedMateria[i];
        if (rhs.LearnedMateria[i])
            this->LearnedMateria[i] = rhs.LearnedMateria[i]->clone();
        else
            this->LearnedMateria[i] = NULL;
    }
    return (*this);
}

/*----------------------------- Member Functions --------------------------*/

void MateriaSource::learnMateria(AMateria *add)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->LearnedMateria[i])
        {
            this->LearnedMateria[i] = add;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->LearnedMateria[i] && this->LearnedMateria[i]->getType() == type)
            return (this->LearnedMateria[i]->clone());
    }
    return (NULL);
}
