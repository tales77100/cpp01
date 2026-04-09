#include "Zombie.hpp"


void	randomChump(string name){
	Zombie zombie;

	zombie.set_name(name);
	zombie.announce();
}
