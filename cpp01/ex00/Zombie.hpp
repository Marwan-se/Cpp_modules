/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 10:03:45 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/25 10:03:46 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
        std::string getName(void);
        void setName(std::string name);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif