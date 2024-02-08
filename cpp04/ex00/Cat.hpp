/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:14:52 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/08 19:27:59 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class   Cat : public Animal
{
    public:
        //default constructor
        Cat();
        //copy constructor
        Cat(const Cat &copy);
        //assignment operator
        Cat &operator=(const Cat &rhs);
        //destructor
        virtual ~Cat();
        //getters
        std::string getType();
        //setters
        void setType(std::string value);
};

#endif