#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cctype>
# include <string>
#include "phonebook.hpp"


class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		void	get_contact(int	index);
		int		set_contact(int	index);
};

#endif