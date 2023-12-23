/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 01:16:51 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/23 11:56:25 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl FarlHitler;
	std::string word;
	if (ac != 2)
	{
		std::cout << "Probably complaining about insignificant problems " << std::endl;
		exit (1);
	}
	word = av[1];
	if(word != "ERROR" && word != "INFO" && word != "DEBUG" && word != "WARNING")
	{
		std::cout << "Probably complaining about insignificant problems " << std::endl;
		exit (1);
	}
	word = av[1];
	FarlHitler.complain(word);
	return (0);
}