/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:05:10 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/26 20:42:01 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/*----------------------Constructors-and-Destructor---------------------------*/

Data::Data(void)
{
    std::cout << "Data Default Constructor" << std::endl;
}

Data::Data(const Data &src)
{
    std::cout << "Data Copy Constructor" << std::endl;
    *this = src;
}

Data::~Data(void)
{
    std::cout << "Data Destructor" << std::endl;
}

Data &Data::operator=(const Data &src)
{
    std::cout << "Data Assignation Operator" << std::endl;
    if (this != &src)
    {
        *this = src;
    }
    return (*this);
}
