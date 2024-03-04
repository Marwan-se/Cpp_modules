/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:02:14 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/04 19:34:03 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"
#include <cstddef>
#include <string>

template <class T2>
void print(T2 &x)
{
	std::cout << x << std::endl;
}

template <class T1, class T2>
void iter(T1 *arr, int len, T2 f)
{
	for (int i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}

#endif