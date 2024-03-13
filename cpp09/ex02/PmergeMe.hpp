/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 03:43:37 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/13 04:44:50 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
#include <deque>

class   PmergeMe
{
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        ~PmergeMe();
        PmergeMe &operator=(const PmergeMe &copy);
        void    vmerge(std::vector<int> &v1, std::vector<int> &v2);
        void    dmerge(std::deque<int> &v1, std::deque<int> &v2);
};


#endif