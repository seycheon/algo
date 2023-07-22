#include "../test.hpp"

//#include <bits/stdc++.h>

int main()
{
	int i;
	int j;
	int fee[3] = {0, };
	int	sum = 0;
	int t[101] = {0, };

	for(int i=0; i < 3; i++)
		std::cin >> fee[i];
	for (int p= 0; p <3; p++)
	{
		std::cin >>i;
		std::cin >>j;

		for (int k = i; k <= j; k++)
		{
			if (k > i)
				t[k] += 1;
		}
	}
	for (int k = 0; k < 101; k++)
		sum += t[k] * fee[t[k] - 1];
	std::cout << sum;
}
