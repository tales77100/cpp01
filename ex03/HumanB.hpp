#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(const std::string &n, Weapon &w);
		HumanB(const std::string &n);
		void	attack(void);
		void	setWeapon(Weapon &new_weapon);
	private:
		std::string name;
		Weapon *weapon;
};

#endif
