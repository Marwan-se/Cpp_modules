/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 03:43:35 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/25 02:49:14 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstddef>


// void	merge()

// void	mergesort(std::vectot<int> &vec)
// {
	
// }

std::vector<std::pair<int, int> > MakePairs(std::vector<int> &vec)
{
	std::vector<std::pair<int, int> > pairs;
	size_t size = vec.size();
	
	for (size_t i = 0; i < size; i += 2)
	{
		if (i + 1 < size)
		{
			if (vec[i] > vec[i + 1])
				pairs.push_back(std::make_pair(vec[i + 1], vec[i]));
			else
				pairs.push_back(std::make_pair(vec[i], vec[i + 1]));
		}
	}
	return pairs;
}

bool catchStruggler(int &straggler, std::vector<int> &arr)
{
	
	if (arr.size() % 2 != 0)
	{
        straggler = arr.back();
        arr.pop_back();
        return true;
    }
    return false;
}

void	create_x_y(std::vector<std::pair<int, int> > &pairs, std::vector<int> &x, std::vector<int> &y)
{
	for (size_t i = 0; i < pairs.size(); i++)
	{
		x.push_back(pairs[i].first);
		y.push_back(pairs[i].second);
	}
}

void	algorithm(std::vector<int> &vec)
{
	std::vector<std::pair<int, int> > pairs;
	int straggler = -1;
	
	catchStruggler(straggler, vec);

	pairs = MakePairs(vec);
	std::cout << "Straggler: " << straggler << std::endl;
	for (size_t i = 0; i < pairs.size(); ++i)
    	std::cout << "<" << pairs[i].first << ", " << pairs[i].second << "> ";

	std::vector<int> x, y;
	create_x_y(pairs, x, y);

}