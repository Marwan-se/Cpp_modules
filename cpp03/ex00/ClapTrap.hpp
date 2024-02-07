/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:18:13 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/07 16:47:10 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

# include <iostream>
# include <string>

class	ClapTrap
{
	private:
		std::string	Name;
		int	Hit_point;
		int	Energy_points;
		int	Attack_damage;
	public:
		// Default constructor
		ClapTrap();
		// destructor
		~ClapTrap();
		// Parameterized constructor
		ClapTrap(const std::string &name);
		// Copy constructor
		ClapTrap(const ClapTrap &value);
		// Assignation operator
		ClapTrap &operator=(const ClapTrap &rhs);
		// Member functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		// Getters
		int getHP() const;
		int getEP() const;
		std::string getName() const;
};

#endif
