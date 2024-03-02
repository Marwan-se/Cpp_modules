/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 02:36:48 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/02 23:29:07 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main()
{
    Data myData;
    myData.value = 42;
    myData.str = "marwan";

    uintptr_t serializedValue = Serializer::serialize(&myData);

    std::cout << "Serialized Value : " << serializedValue << std::endl;

    Data* deserializedData = Serializer::deserialize(serializedValue);

    std::cout << "Serialization and deserialization successful!" << std::endl;
    std::cout << "Original value: " << myData.value << std::endl;
    std::cout << "Deserialized value: " << deserializedData->value << std::endl;
    std::cout << "Original string: " << myData.str << std::endl;
    std::cout << "Deserialized string: " << deserializedData->str << std::endl;
    
    return 0;
}

