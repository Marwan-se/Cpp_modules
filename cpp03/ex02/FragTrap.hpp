/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:07:07 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/07 19:59:34 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class   FragTrap : public ClapTrap
{
    public:
        //default constructor
        FragTrap();
        //parameterized constructor
        FragTrap(std::string name);
        //copy constructor
        FragTrap(const FragTrap &value);
        //destructor
        ~FragTrap();
        //assignment operator
        FragTrap&operator=(const FragTrap &rhs);
        //member function
        void    highFivesGuys();
        void    attack(const std::string &target);
};

#endif
