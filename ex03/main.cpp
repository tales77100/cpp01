#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon club = Weapon("crudesadasdsadsadiked club");
		HumanB jhon("jhon");
		jhon.attack();
		jhon.setWeapon(club);
		jhon.attack();
		club.setType("some other type ewewewqb");
		jhon.attack();
	}
	{
		Weapon club = Weapon("crude safsfsdfds club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some sdfsdfsdfdsf type of club");
		bob.attack();
	}
	return 0;
}
