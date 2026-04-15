#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(string n, Weapon w) : name(n), weapon(w){};
		HumanB(string n) : name(n), weapon(""){};
		void	attack(void);
		void	setWeapon(Weapon new_weapon);
	private:
		string name;
		Weapon weapon;
};

#endif
