/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:46:46 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/04 16:33:59 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<class T>
Array<T>::Array() : arr(NULL), len(0)
{
}

template<class T>
Array<T>::Array(unsigned int n) : arr(new T[n]), len(n)
{
}

template<class T>
Array<T>::Array(const Array &copy) : arr(new T[copy.len]), len(copy.len)
{
	for (int i = 0; i < len; i++)
		arr[i] = copy.arr[i];
}

template<class T>
Array<T> &Array<T>::operator=(const Array &rhs)
{
	if (this == &rhs)
		return (*this);
	if (this != &rhs)
	{
		delete[] arr;
		len = rhs.len;
		arr = new T[len];
		for (unsigned int i = 0; i < len; i++)
		{
			arr[i] = rhs.arr[i];
		}
	}
	return (*this);
}

template<class T>
Array<T>::~Array()
{
	delete[] arr;
}

template<class T>
T &Array<T>::operator[](int index)
{
	if (index < 0 || index >= len)
		throw Array::out_of_range();
	return (arr[index]);
}

template<class T>
unsigned int Array<T>::size() const
{
	return (len);
}
