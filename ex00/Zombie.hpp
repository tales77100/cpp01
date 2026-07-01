#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iomanip>
#include <iostream>

void  randomChump(std::string name);

class Zombie{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	set_name(const std::string name);
	private:
		std::string	name;
};

Zombie	*newZombie(std::string name);
#endif
