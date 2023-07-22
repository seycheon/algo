#include "../test.hpp"

//#include "bits/stdc++.h"

using namespace std;

int n;
vector<int> v;

int main()
{
	cin >> n;
	long long ret;
	ret = 665;
	int cnt = 0;
	while (1)
	{
		string s = to_string(ret);
		for (int i = 0; i < s.length(); i++)
		{
			if (((i < s.length() - 2) && s[i] == '6' && s[i + 1] == '6' && s[i + 2] == '6'))
			{
				cnt += 1;
				break ;
			}
		}
		if (cnt == n)
		{
			cout << ret;
			return (0);
		}
		ret += 1;
	}
}
