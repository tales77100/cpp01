#include "Weapon.hpp"
#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	this->weapon = &new_weapon;
}

HumanB::HumanB(const std::string &n, Weapon &w) : name(n), weapon(&w) {}
HumanB::HumanB(const std::string &n) : name(n), weapon(NULL) {}
