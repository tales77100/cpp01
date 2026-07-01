#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(const std::string name)
{
	this->name = name;
};

Zombie::Zombie() {std::cout << "Zombie constructor called" << std::endl;};
Zombie::~Zombie() {std::cout << this->name << " has been destroyed" << std::endl;};