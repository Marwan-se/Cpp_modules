/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:50:46 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/07 18:57:33 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class   ScavTrap : public ClapTrap
{
    public:
        //default constructor
        ScavTrap();
        //parameterized constructor
        ScavTrap(std::string name);
        //copy constructor
        ScavTrap(const ScavTrap &value);
        //destructor
        ~ScavTrap();
        //assignment operator
        ScavTrap&operator=(const ScavTrap &rhs);
        //member function
        void    attack(const std::string &target);
        void    guardGate();
};


#endif