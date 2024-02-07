/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:18:13 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/07 15:39:12 by msekhsou         ###   ########.fr       */
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
		ClapTrap();
		~ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &value);
		ClapTrap &operator=(const ClapTrap &rhs);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHP() const;
		int getEP() const;
		std::string getName() const;
};

#endif
