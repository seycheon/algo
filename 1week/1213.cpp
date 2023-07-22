#include "../test.hpp"

//#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string	str;
	string	a;
	string	ra;

	cin >> str;
	sort(str.begin(), str.end());
	int		arr[26] = {0, };
	for (int i = 0; i < str.size(); i++)
		arr[str[i] - 'A'] += 1;
	int c = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] % 2 == 1)
			c += 1;
	}

	if ((str.size() % 2 == 0 && c != 0) || (str.size() % 2 == 1 && c > 1))
		cout << "I'm Sorry Hansoo";
	else
	{
		int	p = -1;
		for(int i = 0 ; i < 26; i++)
		{
			if (arr[i] % 2 == 1)
				p = i;
			for (int j = 0; j < arr[i] / 2 ; j++)
			{
				a += i + 'A';
				ra = static_cast<char>(i + 'A') + ra;
			}
		}
		if (str.size() % 2 == 0)
			cout << a << ra;
		else
			cout << a << static_cast<char> (p + 'A') << ra;
	}
}
