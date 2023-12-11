/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:14:21 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/10 20:14:03 by msekhsou         ###   ########.fr       */
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
	int no_index = 0;

	std::cout << " index | first name | last name | nickname " << std::endl;
	while (i < index)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << this->contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_nickname() << std::endl;
		i++;
	}
	std::cout << "Enter a contact index: ";
	std::cout << "\n";
	std::getline(std::cin, index_str);
	if(!isdigit(index_str[0]))
	{
		std::cout << "The contact index should be a number" << std::endl;
		std::cout << "\n";
		get_contact(index);
		return ;
	}
	if(index_str[0] == '\0' || index_str.length() > 1)
	{
		std::cout << "Wrong index" << std::endl;
		std::cout << "\n";
		get_contact(index);
		return ;
	}
	no_index = index_str[0] - '0';
	if(no_index > index)
	{
		std::cout << "The contact index should be between 1 and " << index << std::endl;
		std::cout << "\n";
		get_contact(index);
		return ;
	}
	else
	{
		std::cout << "first name: " << this->contacts[no_index - 1].get_first_name() << std::endl;
		std::cout << "last name: " << this->contacts[no_index - 1].get_last_name() << std::endl;
		std::cout << "nickname: " << this->contacts[no_index - 1].get_nickname() << std::endl;
		std::cout << "phone number: " << this->contacts[no_index - 1].get_phone_number() << std::endl;
		std::cout << "darkest secret: " << this->contacts[no_index - 1].get_darkest_secret() << std::endl;
	}
}

int	PhoneBook::set_contact(int index)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	std::string arr[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};

	while(index < 5)
	{
		std::cout << "Enter " << arr[index] << ": ";
		std::getline(std::cin, first_name);
		if(first_name.empty())
		{
			while(first_name.empty())
			{
				std::cout << "The " << arr[index] << " should not be empty" << std::endl;
				std::cout << "Enter " << arr[index] << ": ";
				std::getline(std::cin, first_name);
			}
		}
		index++;
		this->contacts[index].set_first_name(first_name);
		this->contacts[index].set_last_name(last_name);
		this->contacts[index].set_nickname(nickname);
		this->contacts[index].set_phone_number(phone_number);
		this->contacts[index].set_darkest_secret(darkest_secret);
	}
	return (0);	
}
