/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 23:37:44 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/04 16:35:59 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>


template<class T>   class Array
{
	private:
		T *arr;
		int len;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array &operator=(const Array &rhs);
		~Array();
		T &operator[](int index);
		unsigned int size() const;
		class out_of_range : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Out of range";
				}
		};
};

#endif