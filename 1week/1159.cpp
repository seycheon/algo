#include "../test.hpp"

//#include <bits/stdc++.h>
using namespace	std;

int main()
{
	int		n;
	string	str;
	int		flag = 0;
	int		a[26] = {0, };

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		a[str[0] - 'a'] += 1;

	}
	for (int i = 0; i < 26; i++)
	{
		if (a[i] >= 5)
		{
			cout << static_cast<char>(i + 'a');
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "PREDAJA";
}





