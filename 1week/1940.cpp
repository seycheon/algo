#include "../test.hpp"

//#include <bits/stdc++.h>

using namespace std;
int main()
{
	int m,n;
	int sum = 0;

	cin >> n >> m;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (i != j && arr[i] + arr[j] == m)
				cnt += 1;
		}
	}
	cout << cnt;
}
