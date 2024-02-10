/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:12:28 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/10 23:31:13 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class   Animal
{
    protected:
        std::string type;
    public:
    
    /*---------------------- Orthodox Canonical Form ----------------------*/
        //default constructor
        Animal();
        //copy constructor
        Animal(const Animal &copy);
        //assignment operator
        Animal &operator=(const Animal &rhs);
        //destructor
        virtual ~Animal();
    /*---------------------------------------------------------------------*/
        
    /*----------------------------- Member Functions -----------------------*/
        //getters
        std::string getType() const;
        //setters
        void setType(std::string value);
        //member function
        virtual void makeSound() const = 0;
    /*---------------------------------------------------------------------*/
};

#endif