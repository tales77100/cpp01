#include "Zombie.hpp"

int	main(void)
{
	randomChump("tango");
	Zombie *z = newZombie("charlie");
	z->announce();
	delete z;
}
