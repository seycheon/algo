#include "../test.hpp"

//#include <bits/stdc++.h>

int main()
{
	std::string a;

	std::cin >> a;

	std::string ra(a);
	std::reverse(a.begin(), a.end());
	if (a == ra)
		std::cout << 1;
	else
		std::cout << 0;
}
