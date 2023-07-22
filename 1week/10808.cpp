#include "../test.hpp"

int	main(int ac, char ** av)
{
	std::string	str;
	int			check[26] = {0,};
	int			i = 0;

	std::cin >> str;
	while (str[i])
	{
		check[str[i] - 'a'] += 1;
		i++;
	}
	for(int i = 0; i < 26; i++)
		std::cout << check[i] << " ";
}
