/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:25:00 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/07 11:32:45 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int N;
		std::vector<int> numbers;
	public:
		Span();
		Span(const unsigned int n);
		Span(const Span &s);
		~Span();
		Span &operator=(const Span &s);
		void addNumber(unsigned int n);
		int	shortestSpan();
		int	longestSpan();
		void addNumber(const std::vector<int> &newnumbers);

};

#endif