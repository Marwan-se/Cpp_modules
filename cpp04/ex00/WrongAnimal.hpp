/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:07:13 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/09 22:11:52 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        //default constructor
        WrongAnimal();
        //copy constructor
        WrongAnimal(const WrongAnimal &copy);
        //assignment operator
        WrongAnimal &operator=(const WrongAnimal &rhs);
        //destructor
        virtual ~WrongAnimal();
        //getters
        std::string getType();
        //setters
        void setType(std::string value);
        //member functions
        void makeSound() const;
};

#endif
