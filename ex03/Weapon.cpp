#include "Weapon.hpp"

string	&Weapon::getType()
{
	return (string &)this->type;
}

void	Weapon::setType(string new_type)
{
	string &temp = this->getType();
	temp = new_type;
}
