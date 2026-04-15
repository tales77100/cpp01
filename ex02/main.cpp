#include <iostream>

using namespace std;

int	main(void)
{
	string	s = "HI THIS IS BRAIN";
	const char	*s_point = s.data();
	const char	&s_ref = s.operator[](0);
	const char	*s_point_ref = &s_ref;

	cout << &s << endl;
	cout << &s_point << endl;
	cout << &s_point_ref << endl;

	cout << s << endl;
	cout << s_point << endl;
	cout << s_ref << endl;
}
