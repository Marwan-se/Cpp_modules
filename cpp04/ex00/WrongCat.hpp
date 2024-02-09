/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:05:46 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/09 22:17:37 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
    public:
        //default constructor
        WrongCat();
        //copy constructor
        WrongCat(const WrongCat &copy);
        //assignment operator
        WrongCat &operator=(const WrongCat &rhs);
        //destructor
        ~WrongCat();
        //getters
        std::string getType();
        //setters
        void setType(std::string value);
        //member functions
        void makeSound();
};

#endif