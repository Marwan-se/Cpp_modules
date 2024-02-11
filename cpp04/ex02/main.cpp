/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:03:55 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 12:56:18 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Brain brain;
    brain.setIdea("I am a cat");
    

    Dog dog;
    dog.setBrain(&brain);
    dog.getBrain()->printIdeas(30);
    brain.setIdea("I am a tree");
    dog.getBrain()->printIdeas(30);
    brain.printIdeas(30);

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
    // i = 0;
    // while (i < 10)
    // {
    //     animals[i]->makeSound();
    //     delete animals[i];
    //     i++;
    // }
    
    return 0;
}
