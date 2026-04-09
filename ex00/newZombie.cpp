#include "Zombie.hpp"


Zombie	*newZombie(string name)
{
	Zombie	*zombie = new Zombie;
	zombie->set_name(name);
	return (zombie);
}
