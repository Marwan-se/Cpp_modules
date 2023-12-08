/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:54:10 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/07 19:26:18 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    int index = 0;
    int contact_index = 0;

    while (1)
    {
        std::cout << "Enter a command:( ADD | SEARCH | EXIT :)" << std::endl;
        std::getline(std::cin, command);
        if (command == "EXIT")
            break ;
        else if (command == "ADD")
        {
            if(contact_index == 8)
                contact_index = 0;
            if (index < 8)
                index++; 
            if (phonebook.set_contact(contact_index))
                break;
            contact_index++;
        }
        else if (command == "SEARCH")
        {
            if(index == 0)
            {
                std::cout << "Phonebook is empty" << std::endl;
                std::cout << "Enter a command:( ADD | SEARCH | EXIT :)" << std::endl;
            }
            else
                phonebook.get_contact(index);
        }
        else
            std::cout << "Enter a command:( ADD | SEARCH | EXIT :)" << std::endl;
    }
}

