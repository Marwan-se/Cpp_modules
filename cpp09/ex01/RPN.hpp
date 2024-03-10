/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:36:19 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/10 08:18:38 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>

class RPN
{
	public:
		RPN();
		RPN(const RPN &copy);
		~RPN();
		RPN &operator=(const RPN &copy);
		void	evaluate(std::string str);
		void	parse_input(std::string str);
	private:
		std::stack<int> _stack;
};

#endif