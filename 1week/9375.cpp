#include "../test.hpp"

//#include <bits/stdc++.h>

using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int n;
		map<string, int> arr;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			string a, b;
			cin >> a >> b;
			if (arr.count(b) > 0)
				arr[b] += 1;
			else
				arr.insert(make_pair(b, 1));
		}
		int	sum = 1;
		std::map<std::string, int>::iterator it;

		for (it = arr.begin(); it !=arr.end(); it++)
			sum *= (it->second + 1);
		cout << sum - 1 << "\n";
	}
}
