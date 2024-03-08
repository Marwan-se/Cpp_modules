/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:04:58 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/08 18:30:59 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <stack>
#include <iostream>
#include <iterator>
#include <deque>

template < class T , class C = std::deque<T> >
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){};
        MutantStack(MutantStack const &src):std::stack<T, C>(src){};
        ~MutantStack(){};
        MutantStack &operator=(MutantStack const &src){new (this) MutantStack(src);};
        
        typedef typename C::iterator iterator;
        iterator begin() { return std::stack<T, C>::c.begin(); }
        iterator end() { return std::stack<T, C>::c.end(); }
};

#endif