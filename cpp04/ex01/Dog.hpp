/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:14:56 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 12:37:12 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Dog : public Animal
{
    private:
        Brain *brain;
    public:

    /*---------------------- Orthodox Canonical Form ----------------------*/
        //default constructor
        Dog();
        //copy constructor
        Dog(const Dog &copy);
        //assignment operator
        Dog &operator=(const Dog &rhs);
        //destructor
        ~Dog();
    /*---------------------------------------------------------------------*/

    /*----------------------------- Member Functions -----------------------*/
        //getters
        Brain *getBrain() const ;
        //setters
        void setBrain(Brain *value);
        //member functions
        void makeSound() const;
    /*---------------------------------------------------------------------*/
};

#endif