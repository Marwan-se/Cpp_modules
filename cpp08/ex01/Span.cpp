/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:24:53 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/06 21:12:48 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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
    N = rhs.N;
    v = rhs.v;
    return *this;
}

