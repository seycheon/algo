#include "../test.hpp"

//#include <bits/stdc++.h>
using namespace std;
int n,m, visited[51][51]= {};
string str;
vector<string>	vec;
queue<pair<int, int>>	que;
char a[51][51];
int ny[] = {-1, 0, 1, 0};
int nx[] = {0, 1, 0, -1};
int maxx;

void bfs(int i, int j){
	visited[i][j] = 1;
	que.push(make_pair(i, j));
	while (que.size())
	{
		int qx = que.front().second;
		int qy = que.front().first;
		que.pop();
		for (int k = 0; k < 4; k++){
		int py = qy + ny[k];
		int px = qx + nx[k];
		if (py < 0 || py >= n || px < 0 || px >= m || visited[py][px] || vec[py][px] == 'W') continue;
		que.push(make_pair(py, px));
		visited[py][px] = visited[qy][qx] + 1;
		if (maxx < visited[py][px])
			maxx = visited[py][px];
		}
	}
	std::fill(&visited[0][0], &visited[50][50] + 1, 0);
}

int main(){
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> str;
		vec.push_back(str);
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (vec[i][j] == 'L') bfs(i, j);
		}
	}

	cout << maxx - 1 << endl;

}
