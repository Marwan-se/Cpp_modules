#include "contact.hpp"
#include "phonebook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    int index = 0;
    int contact_index = 0;

    while (1)
    {
        std::cout << "Enter a command: ADD(A) | SEARCH(S) | EXIT(E) :" << std::endl;
        std::getline(std::cin, command);
        if(std::cin.eof())
            break ;
        if (command == "")
            continue ;
        if (command == "EXIT" || command == "E")
            break ;
        else if (command == "ADD" || command == "A")
        {
            if(contact_index == 8)
                contact_index = 0;
            if (index < 8)
                index++; 
            if (phonebook.set_contact(contact_index))
                break ;
            contact_index++;
        }
        else if (command == "SEARCH" || command == "S")
        {
            if(index == 0)
                std::cout << "Phonebook is empty" << std::endl;
            else
                phonebook.get_contact(index);
        }
        else
            std::cout << "\x1b[31m Invalid INPUT \033[0m\n" << std::endl;
    }
}
