/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:24:53 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/07 11:46:00 by msekhsou         ###   ########.fr       */
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
    N = n;
}

Span::Span(const Span &s)
{
    *this = s;
}

Span &Span::operator=(const Span &rhs)
{
    if (this == &rhs)
        return (*this);
    N = rhs.N;
    numbers = rhs.numbers;
    return *this;
}

void    Span::addNumber(unsigned int n)
{
    if (numbers.size() >= N)
        throw std::overflow_error("Vector is full");
    numbers.push_back(n);
}

int    Span::shortestSpan()
{
    if (this->numbers.size() <= 1)
        throw std::runtime_error("Not enough elements to calculate the shortest span");
    int min = INT_MAX;
    std::vector<int> sorted(numbers);
    std::sort(sorted.begin(), sorted.end());
    for (size_t i = 1; i < sorted.size(); ++i)
    {
        int diff = sorted[i] - sorted[i - 1];
        if (diff < min)
            min = diff;
    }
    return min;
}

int    Span::longestSpan()
{
    if (this->numbers.size() <= 1)
        throw std::runtime_error("Not enough elements to calculate the longest span");
    int max = *std::max_element(numbers.begin(), numbers.end());
    int min = *std::min_element(numbers.begin(), numbers.end());
    return (max - min);
}

void    Span::addNumber(const std::vector<int> &newnumbers)
{
    if (numbers.size() + newnumbers.size() > N)
        throw std::runtime_error("Adding these numbers will exceed the maximum capacity of the Span");
    numbers.insert(numbers.end(), newnumbers.begin(), newnumbers.end());
}
