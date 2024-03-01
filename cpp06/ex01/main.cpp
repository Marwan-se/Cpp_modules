/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 02:36:48 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/01 10:22:38 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data    data;
    data.value = 42;
    data.str = "Hello World!";
    
    uintptr_t serialize = Serializer::serialize(&data);

    Data *deserialize = Serializer::deserialize(serialize);

    std::cout << "Value: " << deserialize->value << std::endl;
    std::cout << "String: " << deserialize->str << std::endl;


}