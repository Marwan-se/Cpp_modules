#include "contact.hpp"
#include "phonebook.hpp"

void	PhoneBook::get_contact(int index)
{
	std::string index_str;
	int i = 0;
	int no_index = 0;

	std::cout << "  index   |first name| last name| nickname" << std::endl;
	while (i < index)
	{
		std::cout << "     ";
		std::cout << i + 1 << "    |";
		std::cout << field_len(this->contacts[i].get_first_name()) << "|";
		std::cout << field_len(this->contacts[i].get_last_name()) << "|";
		std::cout << field_len(this->contacts[i].get_nickname()) << std::endl;
		i++;
	}
	std::cout << "Enter a contact index: ";
	std::cout << "\n";
	std::getline(std::cin, index_str);
	if(std::cin.eof())
		return ;
	if(!isdigit(index_str[0]))
	{
		std::cout << " The contact index should be a number " << std::endl;
		std::cout << "\n";
		return ;
	}
	if(index_str[0] == '\0' || index_str.length() > 1 || index_str[0] == '0')
	{
		std::cout << " Wrong index " << std::endl;
		return ;
	}
	no_index = index_str[0] - '0';
	if(no_index > index)
	{
		std::cout << "The contact index should be between 1 and " << index << std::endl;
		std::cout << "\n";
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
