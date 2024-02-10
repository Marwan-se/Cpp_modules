/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:14:52 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/10 16:55:12 by msekhsou         ###   ########.fr       */
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
        virtual ~Cat();
    /*---------------------------------------------------------------------*/

    /*----------------------------- Member Functions -----------------------*/
        //getters
        std::string getType();
        //setters
        void setType(std::string value);
        //member functions
        void makeSound() const;
    /*---------------------------------------------------------------------*/
};

#endif