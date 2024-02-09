/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:03:55 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/09 22:26:05 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *wrong = new WrongCat();

    std::cout << std::endl;

    std::cout << "meta->getType() = " << meta->getType() << std::endl;
    std::cout << "j->getType() = " << j->getType() << std::endl;
    std::cout << "i->getType() = " << i->getType() << std::endl;
    std::cout << "wrong->getType() = " << wrong->getType() << std::endl;

    std::cout << std::endl;

    j->makeSound(); //will output the dog sound!
    i->makeSound(); //will output the cat sound!
    wrong->makeSound();

    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    delete wrong;
    return 0;
}
