#include "../test.hpp"

//#include "bits/stdc++.h"

using namespace std;

int n, l, r, a[54][54] = {}, visited[54][54] = {}, tt;

int ny[] = {-1, 0, 1, 0};
int nx[] = {0, 1, 0, -1};

bool bsp(int i, int j)
{
	queue<pair<int, int>> v;
	queue<pair<int, int>> rv;
	bool	ret = false;

	visited[i][j] = 1;
	v.push({i,j});
	rv.push({i,j});
	int sum = a[i][j];
	while (v.size()){

		int y = v.front().first;
		int x = v.front().second;
		v.pop();
		for(int k = 0; k < 4; k++){
			int py = y + ny[k];
			int px = x + nx[k];
			if (py < 0 || py >= n || px < 0 || px >=n || visited[py][px]) continue ;
			if ((abs(a[py][px] -a[y][x]) >= l) && (abs(a[py][px] - a[y][x]) <= r)){
				sum += a[py][px];
				visited[py][px] = 1;
				v.push(pair(py, px));
				rv.push(pair(py, px));
			}
		}
	}
	if (rv.size() > 1)
	{
		ret = true;
		int t = sum / rv.size();
		while (!rv.empty()){
			a[rv.front().first][rv.front().second] = t;
			rv.pop();
		}
	}
	return ret;
}

int main()
{
	cin >> n >> l >> r;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	int tt = -1;
	while (true)
	{
		int	ret = 0;
		tt++;
		queue<pair<int, int>> v;
		queue<pair<int, int>> rv;
		fill(&visited[0][0], &visited[50][50] + 1, 0);
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (!visited[i][j]) ret += bsp(i, j);
			}
		}
		if (ret == 0) break ;
	}
	cout << tt << endl;
}
