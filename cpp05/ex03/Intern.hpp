/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 02:02:35 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/23 02:07:56 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &Copy);
		Intern &operator=(const Intern &rhs);
		AForm *makeForm(std::string const &formName, std::string const &target);
};



#endif
