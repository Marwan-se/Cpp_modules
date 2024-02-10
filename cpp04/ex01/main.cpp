/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:03:55 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/10 01:32:20 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <cstdlib>

void    leaks()
{
    system("leaks Animal");
}

int main()
{
    atexit(leaks);
    Brain a;
    Brain b;

    b = a;
    b.printIdeas();

    Dog dog;
    Cat cat;

    const Animal *animals[10];
    int i = 0;
    while (i < 10)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        i++;
    }
    i = 0;
    while (i < 10)
    {
        delete animals[i];
        i++;
    }
    return 0;
}