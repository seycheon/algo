#include "../test.hpp"

//#include <bits/stdc++.h>

using namespace std;
int n, m, k, r, t;
int ret = 0;

int main()
{
	cin >> n >> m >> k;
	t = m;
	for (int i = 0; i < k; i++)
	{
		cin >> r;
		if (t <= r)
		{
			ret += r - t;
			t = r;
		}
		else if (r <= t - m)
		{
			ret += (t - m - r + 1);
			t = r + m - 1;
		}
	}
	cout << ret;
}
