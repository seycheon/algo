#include "../test.hpp"

//#include <bits/stdc++.h>
using namespace	std;

int main()
{
	int		n;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (scanf("%d", &n) != EOF)
	{
		long long	ul = 1;
		int			s = 1;
		while (1)
		{
			if (ul % n != 0)
			{
				ul = (ul * 10 % n) + 1;
				s += 1;
			}
			else
				break ;
		}
		cout << s << '\n';
	}
}
