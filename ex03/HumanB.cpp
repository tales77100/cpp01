#include "Weapon.hpp"
#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.type << std::endl;
}

void	HumanB::setWeapon(Weapon new_weapon)
{
	this->weapon = new_weapon;
}
