#include "Harl.hpp"

int main(int ac, char *av[])
{
	Harl harl;

	harl.complain("DEBUG");
	std::cout << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	harl.complain("a");
    std::cout << std::endl;
    harl.complain(av[1]);
	return 0;
}