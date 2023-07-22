#include "../test.hpp"

//#include <bits/stdc++.h>
using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int y, x, ny, nx, n, v, cnt = 0, maxx = 0;
int arr[101][101] = {};

int main()
{
	cin >> n;
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < n ; j++)
		{
			cin >> v;
			arr[i][j] = v;
		}
	}

	for (int p = 0; p <= 100; p++)
	{
		cnt = 0;
		int visited[101][101] = {};

		for (int i = 0; i < n ; i++)
		{
			for (int j = 0; j < n ; j++)
			{
				if (visited[i][j] != 1 && arr[i][j] > p)
				{
					cnt++;
					queue<pair<int, int>> q;
					int a,b;

					q.push({i,j});
					visited[i][j] = 1;
					while (q.size())
					{
						tie(a, b) = q.front(); q.pop();
						for (int k = 0; k < 4; k++)
						{
							ny = a + dy[k];
							nx = b + dx[k];
							if (ny < 0 || ny >= n || nx < 0 || nx >= n || arr[ny][nx] <= p || visited[ny][nx] == 1) continue;
							visited[ny][nx] = 1;
							q.push({ny, nx});
						}
					}
				}
			}
		}
		if (maxx < cnt)	maxx = cnt;
	}
	cout << maxx;
}
