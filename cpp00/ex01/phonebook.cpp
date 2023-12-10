/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: me <me@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:14:21 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/10 18:02:23 by me               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}

std::string Contact::get_last_name()
{
	return (this->last_name);
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

std::string Contact::get_phone_number()
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}

void	PhoneBook::get_contact(int index)
{
	std::string index_str;
	int i = 0;

	std::cout << " index | first name | last name | nickname " << std::endl;
	while (i < index)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << this->contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_nickname() << std::endl;
		i++;
	}
	std::cout << "Enter an contact index: ";
	std::getline(std::cin, index_str);
	if(index_str[0] == '\0' || index_str.length() > 1 || index_str[0] < '1' || index_str[0] > '8')
		std::cout << "Wrong index" << std::endl;
	if(!isdigit(index_str[0]))
		std::cout << "The contact index should be a number" << std::endl;
	if (index_str.length() == 1 && index_str[0] >= '1' && index_str[0] <= '8')
	{
		i = index_str[0] - '0';
		std::cout << "first name: " << this->contacts[i - 1].get_first_name() << std::endl;
		std::cout << "last name: " << this->contacts[i - 1].get_last_name() << std::endl;
		std::cout << "nickname: " << this->contacts[i - 1].get_nickname() << std::endl;
		std::cout << "phone number: " << this->contacts[i - 1].get_phone_number() << std::endl;
		std::cout << "darkest secret: " << this->contacts[i - 1].get_darkest_secret() << std::endl;
	}
}

int	PhoneBook::set_contact(int index)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter first name: ";
	std::getline(std::cin, first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkest_secret);
	this->contacts[index].set_first_name(first_name);
	this->contacts[index].set_last_name(last_name);
	this->contacts[index].set_nickname(nickname);
	this->contacts[index].set_phone_number(phone_number);
	this->contacts[index].set_darkest_secret(darkest_secret);
	return (0);	
}
