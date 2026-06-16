#include <iostream>

int	main(void)
{
	std::string	s = "HI THIS IS BRAIN";
	const char	*s_point = s.data();
	const char	&s_ref = s.operator[](0);
	const char	*s_point_ref = &s_ref;

	std::cout << &s << std::endl;
	std::cout << &s_point << std::endl;
	std::cout << &s_point_ref << std::endl;

	std::cout << s << std::endl;
	std::cout << s_point << std::endl;
	std::cout << s_ref << std::endl;
}
