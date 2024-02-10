/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:03:55 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/10 17:31:26 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void vv () {
    system ("leaks Animals");
}

int main()
{
    
    Dog a;
    Dog b(a);


    atexit (vv);
    // b.printIdeas();

    // Dog dog;
    // Cat cat;

    // const Animal *animals[10];
    // int i = 0;
    // while (i < 10)
    // {
    //     if (i % 2 == 0)
    //         animals[i] = new Dog();
    //     else
    //         animals[i] = new Cat();
    //     i++;
    // }
    // std::cout << std::endl;
    // i = 0;
    // while (i < 10)
    // {
    //     delete animals[i];
    //     i++;
    // }
    return 0;
}
