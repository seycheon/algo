#include "../test.hpp"

//#include "bits/stdc++.h"
using namespace std;

int n, c, v;
map<int, int> m;
vector<int> vec;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	if (a.second == b.second)
		return find(vec.begin(), vec.end(), a.first) < find(vec.begin(), vec.end(), b.first);
	return a.second > b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> c;

	for (int i = 0; i < n; i++)
	{
		cin >> v;
		m[v] += 1;
		auto it = find(vec.begin(), vec.end(), v);
		if (it == vec.end())
			vec.push_back(v);
	}
	// for (auto it: vec)
	// 	cout << it << " ";

	// cout << endl;

	vector<pair<int, int>> sv(m.begin(), m.end());
	sort(sv.begin(), sv.end(), cmp);

	for (auto i : sv)
	{
		for (int j = 0 ; j < i.second; j++)
			cout << i.first << " ";
	}
}

