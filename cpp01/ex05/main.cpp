/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 01:07:44 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/23 01:12:19 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
    Harl    complainer;
    
    complainer.complain("debug");
    complainer.complain("info");
    complainer.complain("warning");
    complainer.complain("error");
}