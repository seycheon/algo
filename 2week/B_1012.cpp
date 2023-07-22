#include "../test.hpp"

//#include <bits/stdc++.h>
using namespace	std;

int dy[] = {-1, 0 , 1, 0};
int dx[] = {0, 1, 0, -1};

int t, n, m, k, y, x, ny, nx, cnt;

int main()
{
	cin >> t;
	for (int p = 0; p < t; p++)
	{
		int arr[51][51] = {};
		cnt = 0;
		cin >> n >> m >> k;
		for (int i = 0; i < k ; i++)
		{
			cin >> y >> x;
			arr[y][x] = 1;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (arr[i][j] == 1)
				{
					cnt += 1;
					queue<pair<int,int>> q;
					int a,b;
					q.push({i, j});
					while (q.size())
					{
						tie(a,b) = q.front(), q.pop();
						for (int k = 0; k < 4; k++)
						{
							ny = a + dy[k];
							nx = b + dx[k];
							if (ny < 0 || ny >= n || nx < 0 || nx >= m || arr[ny][nx] != 1) continue;
							arr[ny][nx] = 2;
							q.push({ny, nx});
						}
					}
				}
			}
		}
		cout << cnt << endl;
	}
}
