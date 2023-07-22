#include "../test.hpp"

//#include <bits/stdc++.h>
using namespace	std;

int dy[] = {-1, 0 , 1, 0};
int dx[] = {0, 1, 0, -1};

int main()
{
	int n,m;

	cin >> n >> m;

	int arr[101][101];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			scanf("%1d", &arr[i][j]);
	}

	queue<pair<int, int>> q;
	int x,y, nx, ny;
	int	visited[101][101] = {};

	visited[0][0] = 1;
	q.push(make_pair(0, 0));
	while (q.size())
	{
		tie(y, x) = q.front(); q.pop();
		for(int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || ny >=n || nx < 0 || nx >= m || arr[ny][nx] == 0) continue;
			if (visited[ny][nx]) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push(make_pair(ny, nx));
		}
	}
	cout << visited[n-1][m-1] << endl;
}
