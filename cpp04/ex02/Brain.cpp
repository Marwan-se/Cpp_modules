/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:30:38 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 13:46:24 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*---------------------- Constructors & Destructors -----------------------*/

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        ideas[i] = "brain";
        i++;
    }
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

/*-------------------------- Copy && Assignation --------------------------*/

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        ideas[i] = copy.ideas[i];
        i++;
    }
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain assignment operator called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        ideas[i] = rhs.ideas[i];
        i++;
    }
    return *this;
}

/*----------------------------- Member Functions --------------------------*/

std::string Brain::getIdea(int index) const
{
    return this->ideas[index];
}

void Brain::setIdea(std::string value)
{
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = value;
        i++;
    }
}

void Brain::printIdeas(int index) const
{
    std::cout << "Idea " << index << ": " << this->ideas[index] << std::endl;
}
