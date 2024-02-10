/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:14:56 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/10 15:46:58 by msekhsou         ###   ########.fr       */
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
        //default constructor
        Dog();
        //parameterized constructor
        Dog(std::string value);
        //copy constructor
        Dog(const Dog &copy);
        //assignment operator
        Dog &operator=(const Dog &rhs);
        //destructor
        virtual ~Dog();
        //getters
        std::string getType();
        //setters
        void setType(std::string value);
        //member functions
        void makeSound() const;
};

#endif