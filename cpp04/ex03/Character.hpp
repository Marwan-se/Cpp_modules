/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:23:06 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 16:18:38 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *inventory[4];
    public:
    /*---------------------- Orthodox Canonical Form ----------------------*/
        //default constructor
        Character();
        //parameterized constructor
        Character(std::string name);
        //copy constructor
        Character(const Character &type);
        //assignment operator
        Character &operator=(const Character &rhs);
        //destructor
        ~Character();
    /*---------------------------------------------------------------------*/
    
    /*----------------------------- Member Functions -----------------------*/
        //member function
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    /*---------------------------------------------------------------------*/
};

#endif