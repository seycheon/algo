#include "../test.hpp"

//#include <bits/stdc++.h>

using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int	m,n = 0;
	string str;
	map<int, string> po_name;
	map<string, int> po_idx;

	cin >> m;
	cin >> n;

	string arr[m + 1];
	for (int i = 1; i < m + 1; i++)
	{
		cin >> str;
		po_name.insert(make_pair(i, str));
		po_idx.insert(make_pair(str, i));
	}

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (isalpha(str[0]))
			cout << po_idx[str] << "\n";
		else
			cout << po_name[stoi(str)] << "\n";
	}
}
