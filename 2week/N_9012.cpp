#include "../test.hpp"

//#include "bits/stdc++.h"

using namespace std;
int n;

int main()
{
	cin >> n;
	string str;
	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		int flag = 0;
		cin >> str;
		for(int j = 0; j < str.length(); j++)
		{
			if (str[j] == '(')
				cnt += 1;
			else
				cnt -= 1;
			if (cnt < 0)
			{
				cout << "NO" << endl;
				flag = 1;
				break ;
			}
		}
		if (cnt == 0)
			cout << "YES" << endl;
		else
		{
			if (!flag)
				cout << "NO" << endl;
		}
	}

}
