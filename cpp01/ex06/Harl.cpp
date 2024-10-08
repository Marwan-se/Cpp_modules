/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 01:16:49 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/23 11:51:09 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level )
{
    int counter = 0;
    std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"};
    while(levels[counter] != level)
        counter++;
    while (counter < 4)
    {
        switch (counter)
        {
            case 0:
                this->debug();
                break;
            case 1:
                this->info();
                break;
            case 2:
                this->warning();
                break;
            case 3:
                this->error();
                break;
        }
        counter++;
    }
}
