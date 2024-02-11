/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:14:52 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/11 12:48:46 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : public Animal
{
    private:
        Brain *brain;
    public:

    /*---------------------- Orthodox Canonical Form ----------------------*/
        //default constructor
        Cat();
        //copy constructor
        Cat(const Cat &copy);
        //assignment operator
        Cat &operator=(const Cat &rhs);
        //destructor
        ~Cat();
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