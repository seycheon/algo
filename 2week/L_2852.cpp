#include "../test.hpp"

//#include "bits/stdc++.h"

using namespace std;
int n;
int b[48 * 60] = {};

int t,m,s;
int g_1 = 0, g_2 = 0;
string ss;

int main()
{
	cin >> n;
	for (int i = 0; i < n ; i++)
	{
		cin >> t >> ss;

		m = stoi(ss.substr(0,2));
		s = stoi(ss.substr(3,2));
		if (t == 1)
			g_1 += 1;
		else
			g_2 += 1;
		for (int j = 0; j < 48 * 60 - m * 60 - s; j++)
		{
			if (b[m * 60 + s + j] == 0 || b[m * 60 + s + j] == t)
				b[m * 60 + s + j] = t;
			else if (b[m * 60 + s + j] != t && (g_1 == g_2))
				b[m * 60 + s + j] = 0;
		}
	}
	int sum_1 = 0, sum_2 = 0;
	for (int j = 0; j < 48 * 60; j++)
	{
		if (b[j] == 1)
			sum_1 += 1;
		else if (b[j] == 2)
			sum_2 += 1;
	}
	cout << std::setfill('0') << std::setw(2) << sum_1 / 60 <<":"<< std::setfill('0') << std::setw(2) << sum_1%60 << endl;
	cout << std::setfill('0') << std::setw(2) << sum_2 / 60 <<":"<< std::setfill('0') << std::setw(2) << sum_2%60 << endl;

}
