#include "../test.hpp"

//#include "bits/stdc++.h"

using namespace std;
int n,m,a[104][104];

const int dy[] = { -1, 0, 1, 0};
const int dx[] = { 0, 1, 0, -1};

vector<pair<int, int>> ee;

int cnt = 0;

void set_out(int y, int x, int v)
{
	a[y][x] = v;
	for (int i=0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 1 || a[ny][nx] == v) continue;
		set_out(ny, nx, v);
	}
}


int check_out(int y, int x)
{
	for (int i=0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 1 || a[ny][nx] == 0) continue;
		if (a[ny][nx] == 2)
			return 1;
	}
	return 0;
}

void add_stack()
{
	for (int i=0; i <n; i++){
		for (int j=0; j<m; j++){
			if (a[i][j] == 1 && check_out(i,j))
				ee.push_back({i,j});
		}
	}
}

void melt_ee()
{
	for(auto it:ee)
		a[it.first][it.second] = 0;
	ee = {};
}

int main()
{
	cin >> n >> m;
	for (int i=0; i <n; i++){
		for (int j=0; j<m; j++){
			cin>>a[i][j];
			if (a[i][j] == 1) cnt++;
		}
	}

	int t = 0, ret;
	while (cnt)
	{
		set_out(0,0,2);//0,0부터 연결된 외부 공기 2로 변환
		add_stack();//외부에 해당하는 치즈 좌표 스택에 추가
		ret = cnt;
		cnt -= ee.size();//cnt - 외부 좌표 치즈 갯수
		melt_ee();
		t++;
		set_out(0,0,0);
	}
	cout << t << endl;
	cout << ret << endl;
}
