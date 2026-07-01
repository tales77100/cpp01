#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

std::string	ft_filter(std::string str, char *target, char *into)
{
	std::string out;
	size_t	found = 0;
	while (str.size() > 0)
	{
		if ((found = str.find(target)) > 0)
		{
			out.append(str.substr(0, found));
			if (str.size() == 0 || str.size() < found)
				return (out);
			out.append(into);
			str = &str[found] + strlen(target);
		}
		else if (found == 0 && str[found] == target[0])
		{
			out.append(into);
			str = &str[strlen(target)];
		}
		else
		{
			out.append(str);
			str = &str[str.size()];
		}
	}
	return (out);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error, bad args" << std::endl;
		return (1);
	}


	std::ifstream	file_in(av[1]);
	if (!file_in)
	{
		std::cerr << "File cannot open\n";
		return (EXIT_FAILURE);
	}


	std::string name_out = av[1];
	name_out.append(".replace");
	std::ofstream	file_out(name_out.data());
	if (!file_out)
	{
		std::cerr << "File cannot open\n";
		return (EXIT_FAILURE);
	}


	std::string buffer;
	std::string string_in;
	while (getline(file_in, buffer,(char) EOF))
		string_in += buffer;
	file_in.close();


	std::string final_s = ft_filter(string_in, av[2], av[3]);
	file_out << final_s;
	file_out.close();
	return EXIT_SUCCESS;
}
