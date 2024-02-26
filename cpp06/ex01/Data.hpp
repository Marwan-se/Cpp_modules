/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:05:12 by msekhsou          #+#    #+#             */
/*   Updated: 2024/02/26 20:41:43 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>

class Data
{
    public:
    /*--------------------- Orthodox Canonical Form ---------------------------*/
        Data(void);
        Data(const Data &src);
        ~Data(void);
        Data &operator=(const Data &src);
    /*--------------------------------------------------------------------------*/

};

#endif