/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 03:43:35 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/26 03:35:59 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstddef>
#include <ios>

/*-------------------------------VECTOR---------------------------------*/

std::vector<std::pair<int, int> > MakePairs_Vec(std::vector<int> &vec)
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

bool catchStruggler_Vec(int &straggler, std::vector<int> &arr)
{
	
	if (arr.size() % 2 != 0)
	{
        straggler = arr.back();
        arr.pop_back();
        return true;
    }
    return false;
}

void	create_x_y_Vec(std::vector<std::pair<int, int> > &pairs, std::vector<int> &x, std::vector<int> &y)
{
	for (size_t i = 0; i < pairs.size(); i++)
	{
		x.push_back(pairs[i].first);
		y.push_back(pairs[i].second);
	}
}

void	insetionSort_Vec(std::vector<int> &vec)
{
	for (size_t i = 1; i < vec.size(); i++)
	{
		int temp = vec[i];
		int j = i - 1;
		while (j >= 0 && vec[j] > temp)
		{
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = temp;
	}
}

void	finalStep_Vec(std::vector<int> &x, std::vector<int> &y)
{
	std::vector<int>::iterator itr = y.begin();
	for (size_t i = 0; i < x.size(); i++)
	{
		itr = std::lower_bound(y.begin(), y.end(), x[i]);
		y.insert(itr, x[i]);
	}
}

void	algorithm_Vec(std::vector<int> &vec)
{
	std::vector<std::pair<int, int> > pairs;
	int size = vec.size();
	int straggler = -1;

	// start timer
	clock_t start = clock();

	//straggler (true or false)
	catchStruggler_Vec(straggler, vec);

	//making pairs
	pairs = MakePairs_Vec(vec);

	//creating x and y
	std::vector<int> x, y;
	create_x_y_Vec(pairs, x, y);

	//sorting x and y using insertion sort
	insetionSort_Vec (y);

	//inserting x into y using lower_bound
	finalStep_Vec(x, y);

	//check if there is a straggler(if yes insert it)
	if (straggler != -1)
	{
		std::vector<int>::iterator itr = std::lower_bound(y.begin(), y.end(), straggler);
		y.insert(itr, straggler);
	}

	// end timer
	clock_t end = clock();
	double elapsed_secs = double(end - start) / CLOCKS_PER_SEC;

	std::cout << "After: ";
	for (size_t i = 0; i < y.size(); i++)
		std::cout << y[i] << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << size << " elements with std::vector : " << std::fixed << elapsed_secs << " us" << std::endl;
}

/*-------------------------------DEQUE---------------------------------*/

std::deque<std::pair<int, int> > MakePairs_Deq(std::deque<int> &deq)
{
	std::deque<std::pair<int, int> > pairs;
	size_t size = deq.size();
	
	for (size_t i = 0; i < size; i += 2)
	{
		if (i + 1 < size)
		{
			if (deq[i] > deq[i + 1])
				pairs.push_back(std::make_pair(deq[i + 1], deq[i]));
			else
				pairs.push_back(std::make_pair(deq[i], deq[i + 1]));
		}
	}
	return pairs;
}

bool catchStruggler_Deq(int &straggler, std::deque<int> &arr)
{
	
	if (arr.size() % 2 != 0)
	{
		straggler = arr.back();
		arr.pop_back();
		return true;
	}
	return false;
}

void	create_x_y_Deq(std::deque<std::pair<int, int> > &pairs, std::deque<int> &x, std::deque<int> &y)
{
	for (size_t i = 0; i < pairs.size(); i++)
	{
		x.push_back(pairs[i].first);
		y.push_back(pairs[i].second);
	}
}

void	insetionSort_Deq(std::deque<int> &deq)
{
	for (size_t i = 1; i < deq.size(); i++)
	{
		int temp = deq[i];
		int j = i - 1;
		while (j >= 0 && deq[j] > temp)
		{
			deq[j + 1] = deq[j];
			j--;
		}
		deq[j + 1] = temp;
	}
}

void	finalStep_Deq(std::deque<int> &x, std::deque<int> &y)
{
	std::deque<int>::iterator itr = y.begin();
	for (size_t i = 0; i < x.size(); i++)
	{
		itr = std::lower_bound(y.begin(), y.end(), x[i]);
		y.insert(itr, x[i]);
	}
}

void	algorithm_Deq(std::deque<int> &deq)
{
	std::deque<std::pair<int, int> > pairs;
	int straggler = -1;
	int size = deq.size();

	// start timer
	clock_t start = clock();

	//straggler (true or false)
	catchStruggler_Deq(straggler, deq);

	//making pairs
	pairs = MakePairs_Deq(deq);

	//creating x and y
	std::deque<int> x, y;
	create_x_y_Deq(pairs, x, y);

	//sorting x and y using insertion sort
	insetionSort_Deq (y);

	//inserting x into y using lower_bound
	finalStep_Deq(x, y);

	//check if there is a straggler(if yes insert it)
	if (straggler != -1)
	{
		std::deque<int>::iterator itr = std::lower_bound(y.begin(), y.end(), straggler);
		y.insert(itr, straggler);
	}

	// end timer
	clock_t end = clock();
	double elapsed_secs = double(end - start) / CLOCKS_PER_SEC;

	// for (size_t i = 0; i < y.size(); i++)
	// 	std::cout << y[i] << " ";
	std::cout << "Time to process a range of " << size << " elements with std::deque : " << std::fixed << elapsed_secs << " us" << std::endl;

}
