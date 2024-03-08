/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:04:58 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/08 10:36:10 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <stack>
#include <iostream>
#include <iterator>
#include <deque>

template < class T , class Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(MutantStack const &src);
        ~MutantStack();
        MutantStack &operator=(MutantStack const &src);
        
        typedef typename Container::iterator iterator;
        iterator begin() { return std::stack<T, Container>::c.begin(); }
        iterator end() { return std::stack<T, Container>::c.end(); }
};

#include "MutantStack.tpp"

#endif