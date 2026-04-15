#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA{
	public:
		HumanA(string n, Weapon w) : weapon(w), name(n){};
		void	attack(void);
		void HumamA(string name, Weapon weapon)
		{
			this->weapon = weapon;
			this->name = name;
		}
		Weapon weapon;
		string name;
};

#endif
