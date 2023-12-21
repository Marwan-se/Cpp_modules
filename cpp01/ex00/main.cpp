#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("marwan");
    zombie->announce();
    delete zombie;
    randomChump("meriem");
    return (0);
}
