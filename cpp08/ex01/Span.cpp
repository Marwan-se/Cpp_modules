/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:24:53 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/06 23:39:22 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(const unsigned int n)
{
    size = n;
}

Span::Span(const Span &s)
{
    *this = s;
}

Span &Span::operator=(const Span &rhs)
{
    if (this == &rhs)
        return (*this);
    size = rhs.size;
    vec = rhs.vec;
    return *this;
}

void    Span::addNumber(unsigned int n)
{
    if (vec.size() >= size)
        throw std::overflow_error("Vector is full");
    vec.push_back(n);
}

int    Span::shortestSpan()
{
    if (this->vec.size() < 2)
        throw std::runtime_error("Not enough elements to calculate the shortest span");
    int min = INT_MAX;
    std::sort(vec.begin(), vec.end());
    for (unsigned int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i + 1] - vec[i] < min)
            min = vec[i + 1] - vec[i];
    }
    return min;
}

int    Span::longestSpan()
{
    if (this->vec.size() < 2)
        throw std::runtime_error("Not enough elements to calculate the shortest span");
    int max = *std::max_element(vec.begin(), vec.end());
    int min = *std::min_element(vec.begin(), vec.end());
    return max - min;
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (vec.size() + std::distance(begin, end) > size)
        throw std::overflow_error("Vector is full");
    vec.insert(vec.end(), begin, end);
}
