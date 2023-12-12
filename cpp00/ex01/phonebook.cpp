/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:14:21 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/12 11:46:47 by msekhsou         ###   ########.fr       */
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

std::string	field_len(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void	PhoneBook::get_contact(int index)
{
	std::string index_str;
	int i = 0;
	int no_index = 0;

	std::cout << "  index   |first name| last name| nickname" << std::endl;
	while (i < index)
	{
		// std::cout << std::setw(10) << i + 1 << "|";
		// std::cout << std::setw(10) << this->contacts[i].get_first_name() << "|";
		// std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
		// std::cout << std::setw(10) << this->contacts[i].get_nickname() << std::endl;
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << field_len(this->contacts[i].get_first_name()) << "|";
		std::cout << std::setw(10) << field_len(this->contacts[i].get_last_name()) << "|";
		std::cout << std::setw(10) << field_len(this->contacts[i].get_nickname()) << std::endl;
		i++;
	}
	std::cout << "Enter a contact index: ";
	std::cout << "\n";
	std::getline(std::cin, index_str);
	if(std::cin.eof())
		return ;
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
	std::string arr[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
	std::string command;
	int i = 0;
	
	while(i < 5)
	{
		std::cout << "Enter " << arr[i] << ": ";
		std::getline(std::cin, command);
		if(std::cin.eof())
			return 0;
		if (command.empty())
		{
			while(command.empty())
			{
				std::cout << "The " << arr[i] << " field is empty" << std::endl;
				std::cout << "Enter " << arr[i] << ": ";
				std::getline(std::cin, command);
				if(std::cin.eof())
					return 0;
			}
		}
		if(i == 0)
			this->contacts[index].set_first_name(command);
		if(i == 1)
			this->contacts[index].set_last_name(command);
		if(i == 2)
			this->contacts[index].set_nickname(command);
		if(i == 3)
			this->contacts[index].set_phone_number(command);
		if(i == 4)
			this->contacts[index].set_darkest_secret(command);
		i++;
	}
	return (0);
}
