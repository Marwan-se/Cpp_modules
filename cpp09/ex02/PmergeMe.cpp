/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 03:43:35 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/25 01:41:22 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int> vec;
std::deque<int> deq;

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	(void)copy;
	return (*this);
}

/*-----------------------------MERGE FUNCTIONS---------------------------------*/


std::vector<std::pair<int, int> > MakePairs(std::vector<int> &vec)
{
	std::vector<std::pair<int, int> > pairs;
	size_t size = vec.size();
	
	for (size_t i = 0; i < size; i += 2)
	{
		if (i + 1 < size)
			pairs.push_back(std::make_pair(vec[i], vec[i + 1]));
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

void	algorithm(std::vector<int> &vec)
{
	std::vector<std::pair<int, int> > pairs;
	int straggler = 0;
	
	catchStruggler(straggler, vec);

	pairs = MakePairs(vec);
	std::cout << "Straggler: " << straggler << std::endl;
	for (size_t i = 0; i < pairs.size(); ++i)
    	std::cout << "<" << pairs[i].first << ", " << pairs[i].second << "> ";


}