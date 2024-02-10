/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:30:15 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/10 17:21:20 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class   Brain
{
    public:

    /*---------------------- Orthodox Canonical Form ----------------------*/
        //default constructor
        Brain();
        //copy constructor
        Brain(const Brain &copy);
        //assignment operator
        Brain &operator=(const Brain &rhs);
        //destructor
        ~Brain();
    /*---------------------------------------------------------------------*/

    /*----------------------------- Member Functions -----------------------*/
        //getters
        std::string getIdea(int index) const;
        //setters
        void setIdea(int index, std::string value);
        //member functions
        void printIdeas() const;
    /*---------------------------------------------------------------------*/
        std::string ideas[100];
};

#endif