#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde = zombieHorde(10, "enrique");
	if (!horde)
		return (1);
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
}
