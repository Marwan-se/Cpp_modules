/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:02:14 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/03 22:37:46 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"
#include <cstddef>
#include <string>

template <class T1, class T2> void  iter(T1 &array, size_t arrlen, T2 func)
{
    for (size_t i = 0; i < arrlen; i++)
    {
        func(array[i]);
    }
}

#endif