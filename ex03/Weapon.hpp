#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

using namespace std;

class Weapon{
	public:
		Weapon(string t) 	: type(t) {};
		string	&getType();
		void	setType(string new_type);
		string type;
};

#endif
