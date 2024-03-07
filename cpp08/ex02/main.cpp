/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:13:10 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/07 20:10:43 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>


// int main()
// {
//     MutantStack<int> mstack;

//     mstack.push(5);
//     mstack.push(17);

//     std::cout << mstack.top() << std::endl;

//     mstack.pop();

//     std::cout << mstack.size() << std::endl;

//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     mstack.push(0);

//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();

//     ++it;
//     --it;

//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }

// int main()
// {
//     std::list<int> lstack;

//     lstack.push_back(5);
//     lstack.push_back(17);

//     std::cout << lstack.back() << std::endl;
//     lstack.pop_back();
//     std::cout << lstack.size() << std::endl;

//     // std::cout << "size: " << lstack.size() << std::endl;

//     lstack.push_back(3);
//     lstack.push_back(5);
//     lstack.push_back(737);
//     lstack.push_back(0);

//     MutantStack<int, std::list<int>>::iterator lit = lstack.begin();
//     MutantStack<int, std::list<int>>::iterator lite = lstack.end();

//     ++lit;
//     --lit;

//     while (lit != lite)
//     {
//         std::cout << *lit << std::endl;
//         ++lit;
//     }

//     return 0;
// }
