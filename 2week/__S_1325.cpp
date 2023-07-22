#include "../test.hpp"

//#include <bits/stdc++.h>

using namespace std;



/* ㅅㅣ간초과 */
/*
int n,m,tmp,a;
string str;
vector<int> v[10001] = {};
vector<int> p;
int	cnt[10001] = {};
int cntt, maxx = 0;

int dfs(int here)
{
	for (int it : v[here])
	{
		dfs(it);
		cntt++;
	}
	return cntt;
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> tmp;
		v[tmp].push_back(a);
		p.push_back(tmp);
	}
	for (int i = 0; i < p.size(); i++)
	{
		cntt = 0;
		cnt[p[i]] = dfs(p[i]);
		if (maxx < cntt)
			maxx = cntt;
	}
	sort(p.begin(), p.end());
	for (int i = 0; i < p.size(); i++)
	{
		if (cnt[p[i]] == maxx)
			cout << p[i] << " ";
	}
}
*/
