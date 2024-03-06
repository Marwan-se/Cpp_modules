/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:49:25 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/06 18:22:17 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <algorithm>


//Section C.13.5

template<class T> void easyfind(T &s1, int s2)
{
	typename T::iterator iter;
	iter = std::find(s1.begin() ,s1.end(), s2);
	if (iter != s1.end())
		std::cout << "Element found" << std::endl;
	else
		std::cout << "Element not found" << std::endl;
}



#endif