#include "../test.hpp"

//#include <bits/stdc++.h>

int main()
{
	int	a[9];
	int	find = 0;
	int	sum = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	std::sort(a, a+9);
	find = sum;
	for (int i = 0; i < 9; i++)
	{
		find -= a[i];
		for (int j = 0; j < 9; j++)
		{
			if (i != j && find - a[j] == 100)
			{

				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j)
						std::cout << a[k] << "\n";
				}
				return (1);
			}
		}
		find += a[i];
	}
}
