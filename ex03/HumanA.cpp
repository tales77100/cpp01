#include "Weapon.hpp"
#include "HumanA.hpp"


void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &n, Weapon &w) : weapon(w), name(n) {}
