#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout  << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void)
{
    return (name);
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie destroyed" << std::endl;
}
