#include "../test.hpp"

//#include <bits/stdc++.h>
using namespace	std;

int dy[] = {-1, 0 , 1, 0};
int dx[] = {0, 1, 0, -1};

int m, n, k, v, ny, nx;
int x_1, y_1, x_2, y_2;
int	arr[101][101] = {};
vector<int> vec;
int cnt = 0;
int maxx = 0;
void	dfs(int i, int j)
{
	for (int k = 0; k < 4; k++)
	{
		ny = i + dy[k];
		nx = j + dx[k];
		if (ny < 0 || ny >= m || nx < 0 || nx >= n || arr[ny][nx] != 0 ) continue;
		maxx++;
		arr[ny][nx] = maxx;
		dfs(ny, nx);
	}
}

int main()
{
	cin >> m >> n >> k;

	for (int p = 0; p < k; p++)
	{
		cin >> x_1 >> y_1 >> x_2 >> y_2;
		for (int i = m - y_2; i < m - y_1; i++)
		{
			for (int j = x_1; j < x_2; j++)
			{
				arr[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 0)
			{
				maxx = 1;
				cnt++;
				arr[i][j] = 1;
				dfs(i, j);
				vec.push_back(maxx);
			}
		}
	}
	sort(vec.begin(), vec.end());
	cout << cnt << endl;
	for (int i : vec)
		cout << i << " ";
}
