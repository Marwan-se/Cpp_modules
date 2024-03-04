/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:02:14 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/04 18:37:04 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"
#include <cstddef>
#include <string>

template <typename T1, typename T2>
void iter(T1 *arr, size_t len, T2 f)
{
	for (size_t i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}

#endif