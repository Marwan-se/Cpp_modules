/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:34:23 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/03 21:35:59 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <iostream>

template <class T>  void   swap(T x, T y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

template <class T1> T1 min(T1 a, T1 b)
{
    if (a < b)
        return(a);
    return(b);
}

template<class T2>  T2 max(T2 a, T2 b)
{
    if (a > b)
        return(a);
    return(b);
}

#endif