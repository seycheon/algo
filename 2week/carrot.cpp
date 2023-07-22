#include "../test.hpp"
/*

2-A:2178–http://boj.kr/2f0e1a0d5eab489dac865b3ee7e0fa80
● 2-B:1012-http://boj.kr/c2c09d04946f4cc6844f295e38553ca6
● 2-C:2468-http://boj.kr/cf2c8a947f5041b69efd55961657526c
● 2-D:2583-http://boj.kr/e94fb8e43b714794a0950505c0091594
● 2-E:1992-http://boj.kr/f833f244536f48fa960ea96f9b5a35fb
● 2-F:2828-http://boj.kr/fdee73d789cf421db0e71ad9d332cb4a
● 2-G:2910-hhttp://boj.kr/5abff43b14d0489aac5c48a0a717c1a8
● 2-H:4659-http://boj.kr/e531e15e4f3b4d828f8295934feafd07
● 2-I:2870-http://boj.kr/ae47352b83d04d0c9fa5f5e88d697682
● 2-J:10709-http://boj.kr/2e4e57d962ef41a9bb4bc8f670ac158c

● 2-K:3474-http://boj.kr/89fea6fe8f9241b1980f0fac22342679
● 2-L:2852-http://boj.kr/5d5e7e5459524080abec73ee77de2fbe
● 2-M:1436-http://boj.kr/20f8f3ad94314cc8ab21a004bf75dbf6
● 2-N:9012-http://boj.kr/fd0a8a36c94f49b59150c93831c29243
● 2-O:4949-http://boj.kr/5802422930814efeb41969fdf2b6d4d2
● 2-P:14502-http://boj.kr/2812582f10eb41dfa63761279266e42f
● 2-Q:2636-http://boj.kr/6ac357f0b594460389f0d086aefb2a5d
● 2-R:1068-http://boj.kr/ce4d012c085a44918188cb28f01032b0
● 2-S:1325-http://boj.kr/fe8da028da1d44b59514bc4b8231fce8
● 2-T:17298-http://boj.kr/14db359b008e4b2a9c3658689579f13e

*/
//#include <bits/stdc++.h>
using namespace	std;

const int max_n = 104;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int n, m, a[max_n][max_n], visited[max_n][max_n],y, x, sy, sx, ey, ex;

int main()
{
	cin >> n >> m;
	cin >> sy >> sx;
	cin >> ey >> ex;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	queue<pair<int, int>> q;
	visited[sy][sx] = 1;
	q.push({sy, sx});
	while (q.size())
	{
		tie(y, x) = q.front(); q.pop();
		for(int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || ny >=n || nx < 0 || nx >= n || a[ny][nx] == 0) continue;
			if (visited[ny][nx]) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny, nx});
		}
	}
	printf("%d\n", visited[ey][ex]);
}
