/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:49:30 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/06 18:13:50 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstddef>
#include <deque>
#include <forward_list>
#include <vector>

void    printvector(std::vector<int> vector)
{
    for (std::vector<int>::iterator iter = vector.begin(); iter != vector.end(); iter++)
    {
       std::cout << *iter << " " ;
    }
}

void    printdeque(std::deque<int> deque)
{
    for (std::deque<int>::iterator iter = deque.begin(); iter != deque.end(); iter++)
    {
       std::cout << *iter << " " ;
    }
}

void    printlist(std::forward_list<int> forward_list)
{
    for (std::forward_list<int>::iterator iter = forward_list.begin(); 
    iter != forward_list.end(); iter++)
    {
       std::cout << *iter << " " ;
    }
}

int main()
{
    std::vector<int> vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);
    vector.push_back(5);
    easyfind(vector, 1);
    printvector(vector);
    std::cout << std::endl;

    std::cout << "/////////////////////////////" << std::endl;

    std::deque<int> deque;
    deque.push_back(1);
    deque.push_back(2);
    deque.push_back(3);
    deque.push_back(4);
    deque.push_back(5);
    easyfind(deque, 3);
    printdeque(deque);
    std::cout << std::endl;

    std::cout << "/////////////////////////////" << std::endl;

    std::forward_list<int> forward_list;
    forward_list.push_front(1);
    forward_list.push_front(2);
    forward_list.push_front(3);
    forward_list.push_front(4);
    forward_list.push_front(5);
    easyfind(forward_list, 5);
    printlist(forward_list);
    
}