/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:31:48 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/07 17:57:47 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <class T, class Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>()
{
}

template <class T, class Container>
MutantStack<T, Container>::MutantStack(MutantStack const &src) : std::stack<T, Container>(src)
{
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack()
{
}

template <class T, class Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(MutantStack const &rhs)
{
    if (this != &rhs)
        std::stack<T, Container>::operator=(rhs);
    return *this;
}

