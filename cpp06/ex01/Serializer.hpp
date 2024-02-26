/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:01:50 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/26 20:41:28 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include "Data.hpp"

class Serializer
{
    private:
    /*--------------------- Orthodox Canonical Form ---------------------------*/
        Serializer(void);
        Serializer(const Serializer &src);
        ~Serializer(void);
        Serializer &operator=(const Serializer &src);
    /*--------------------------------------------------------------------------*/

    public:
    /*-------------------------- Member Functions -----------------------------*/
        static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
    /*--------------------------------------------------------------------------*/

};


#endif