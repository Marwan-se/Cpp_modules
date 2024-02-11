/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:55:32 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 20:13:14 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <cstdlib>

void    f()
{
    system("leaks Sage");
}

int main()
{
    atexit(f);
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* Jett = new Character("Jett");
    std::cout << std::endl;
    
    me->use(0, *Jett);
    me->use(1, *Jett);

    std::cout << std::endl;
    
    delete Jett;
    delete me;
    delete src;

    return 0;
}