/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 23:37:46 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/04 17:02:04 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Array.tpp"
#define MAX_VAL 750


// int main()
// {
//     int size = 5;
//     int* myArray = new int[size];

//     try
//     {
//         for (int i = 0; i < size; ++i)
//         {
//             myArray[i] = i * 10;
//         }

//         int outOfBoundsIndex = size + 1;
//         int element = myArray[outOfBoundsIndex];

//         std::cout << "Element at index " << outOfBoundsIndex << ": " << element << std::endl;
//     } catch (const std::exception& e)
//     {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }

//     delete[] myArray;
//     return 0;
// }


int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int *mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
