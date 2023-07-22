#include "../test.hpp"

//#include <bits/stdc++.h>
using namespace	std;

int	n;
int	arr[65][65]={};
string str;

string dfs(int i, int j, int size)
{
	if (size == 1)
		return string(1, arr[i][j]);
	char b = arr[i][j];
	string ret = "";
	for (int x = i; x < i + size; x++)
	{
		for (int y = j; y < j + size; y++)
		{
			if (b != arr[x][y])
			{
				ret += '(';
				ret += dfs(i, j, size / 2);
				ret += dfs(i, j + size / 2, size / 2);
				ret += dfs(i + size / 2, j, size / 2);
				ret += dfs(i + size / 2, j + size / 2, size / 2);
				ret += ')';
				return ret;
			}
		}
	}
	return string(1, arr[i][j]);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n ; i++)
	{
		cin >> str;
		for (int j = 0; j < n; j++)
			arr[i][j] = str[j];
	}
	cout << dfs(0, 0, n) << '\n';
}
