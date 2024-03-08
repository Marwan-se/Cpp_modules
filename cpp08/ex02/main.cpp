/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:13:10 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/08 13:10:54 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>


int main()
{
    MutantStack<int> mstack; //stack
    std::list<int> lstack; //list

    mstack.push(5); //stack
    mstack.push(17); //stack

    lstack.push_back(5); //list
    lstack.push_back(17); //list

    std::cout << "stack: " << mstack.top() << std::endl; //stack

    std::cout<< "list: " << lstack.back() << std::endl; //list

    mstack.pop(); //stack

    lstack.pop_back(); //list

    std::cout << "stack size: " << mstack.size() << std::endl; //stack
    std::cout << "list size: " << lstack.size() << std::endl; //list

    mstack.push(3); //stack
    mstack.push(5); //stack
    mstack.push(737); //stack
    mstack.push(0); //stack

    lstack.push_back(3); //list
    lstack.push_back(5); //list
    lstack.push_back(737); //list
    lstack.push_back(0); //list

    MutantStack<int>::iterator it = mstack.begin();//stack
    MutantStack<int>::iterator ite = mstack.end();//stack

    MutantStack<int, std::list<int>>::iterator lit = lstack.begin(); //list
    MutantStack<int, std::list<int>>::iterator lite = lstack.end(); //list

    ++it; //stack
    --it; //stack

    ++lit; //list
    --lit; //list

    // stack loop
    while (it != ite)
    {
        std::cout << "stack: " << *it << std::endl;
        ++it;
    }

    // list loop
    while (lit != lite)
    {
        std::cout << "list: " << *lit << std::endl;
        ++lit;
    }

    return 0;
}
