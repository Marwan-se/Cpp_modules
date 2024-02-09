/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:30:38 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/09 23:05:20 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = "empty";
        i++;
    }
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = copy.ideas[i];
        i++;
    }
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain assignment operator called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = rhs.ideas[i];
        i++;
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const
{
    return this->ideas[index];
}

void Brain::setIdea(int index, std::string value)
{
    this->ideas[index] = value;
}

// void Brain::printIdeas() const
// {
//     int i = 0;
//     while (i < 100)
//     {
//         std::cout << "Idea " << i << ": " << this->ideas[i] << std::endl;
//         i++;
//     }
// }