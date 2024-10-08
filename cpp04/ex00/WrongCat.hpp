/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:05:46 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/10 16:45:03 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
    public:
    
    /*---------------------- Orthodox Canonical Form ----------------------*/
        //default constructor
        WrongCat();
        //copy constructor
        WrongCat(const WrongCat &copy);
        //assignment operator
        WrongCat &operator=(const WrongCat &rhs);
        //destructor
        ~WrongCat();
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