#include "../test.hpp"

//#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	n, k = 0;
	int	sum = 0;

	cin >> n;
	cin >> k;

	int	arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (i < k)
			sum += arr[i];
	}

	int p = 0;
	int	sum_p = sum;

	for (int i = k; i < n; i++)
	{
		sum_p -= arr[p++];
		sum_p += arr[i];
		if (sum < sum_p)
			sum = sum_p;
	}
	cout << sum;
}
