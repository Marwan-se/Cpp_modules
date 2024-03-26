/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 03:43:37 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/26 02:06:26 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
#include <deque>

/*-------------------------------VECTOR---------------------------------*/
void	algorithm_Vec(std::vector<int> &vec);
std::vector<std::pair<int, int> > MakePairs_Vec(std::vector<int> &vec);
bool	catchStruggler_Vec(int &straggler, std::vector<int> &arr);
void	create_x_y_Vec(std::vector<std::pair<int, int> > &pairs, std::vector<int> &x, std::vector<int> &y);
void	insetionSort_Vec(std::vector<int> &vec);
void	finalStep_Vec(std::vector<int> &x, std::vector<int> &y);

/*-------------------------------DEQUE---------------------------------*/
void	algorithm_Deq(std::deque<int> &deq);
bool	catchStruggler_Deq(int &straggler, std::deque<int> &arr);
void	create_x_y_Deq(std::vector<std::pair<int, int> > &pairs, std::vector<int> &x, std::vector<int> &y);
void	insetionSort_Deq(std::deque<int> &deq);
void	finalStep_Deq(std::vector<int> &x, std::vector<int> &y);

#endif