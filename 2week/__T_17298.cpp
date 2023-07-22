#include "../test.hpp"

//#include "bits/stdc++.h"

using namespace std;

int n;

int main()
{
	cin >> n;
	int a[n], b[n];
	int v;
	for (int i = 0; i < n; i++)
	{
		cin >> v;
		a[i] = v;
	}

}


/*
int main()
{
	cin >> n;
	int a[n], b[n];
	int v;
	for (int i = 0; i < n; i++)
	{
		cin >> v;
		a[i] = v;
	}

	int p = a[n - 1];
	b[n - 1] = -1;
	for (int i = n - 2; i > -1; i--)
	{
		if (a[i] <= p)
		{
			b[i] = p;
		}
		else if (a[i] > p)
		{
			int flag = 0;
			for (int j = i + 1; j <= n - 1; j++)
			{
				if (a[i] < a[j])
				{
					b[i] = a[j];
					flag = 1;
				}
			}
			if (flag == 0)
				b[i] = -1;
		}
		p = a[i];
	}
	for (int i = 0; i < n; i++)
		cout << b[i] << ' ';
}
*/
