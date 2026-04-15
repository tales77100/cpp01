#include <iostream>

using namespace std;

int	main(int ac, char **av)
{
	(void) av;
	if (ac != 4)
	{
		cout << "Error, bad args" << endl;
		return (1);
	}
}
