#include <iostream>

using namespace std;

int	main(void)
{
	string	s = "HI THIS IS BRAIN";
	char	*s_point = s.pointer;
	char	&s_ref = s.reference;

	cout << &string << endl;
	cout << &s_point << endl;
	cout << *s_ref << endl;

	cout << string << endl;
	cout << s_point << endl;
	cout << s_ref << endl;
}
