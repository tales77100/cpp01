#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include "Zombie.hpp"

#include <iomanip>
#include <iostream>

using namespace std;

void  randomChump(string name);

class Zombie{
	public:
		void	announce(void);
		void	set_name(const string name)
		{
			this->name = name;
		};
	private:
		string	name;

};

Zombie	*zombieHorde(int N, string name);
#endif
