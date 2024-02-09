/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:30:15 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/09 23:05:16 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class   Brain
{
    private:
        std::string ideas[100];
    public:
        //default constructor
        Brain();
        //copy constructor
        Brain(const Brain &copy);
        //assignment operator
        Brain &operator=(const Brain &rhs);
        //destructor
        ~Brain();
        //getters
        std::string getIdea(int index) const;
        //setters
        void setIdea(int index, std::string value);
        //member functions
        // void printIdeas() const;
};

#endif