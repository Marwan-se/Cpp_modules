/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 02:33:53 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/27 02:33:59 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*-------------------------- Constructors -----------------------------*/

Serializer::Serializer(void)
{
}

Serializer::Serializer(const Serializer &src)
{
    *this = src;
}

/*-------------------------- Destructor -----------------------------*/

Serializer::~Serializer(void)
{
}

/*-------------------------- Operator Overload -----------------------------*/

Serializer &Serializer::operator=(const Serializer &src)
{
    (void)src;
    return (*this);
}

/*-------------------------- Member Functions -----------------------------*/

uintptr_t Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

D