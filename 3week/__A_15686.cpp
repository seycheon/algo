#include "../test.hpp"

//#include "bits/stdc++.h"

using namespace std;

int n,m;
int a[51][51],result = 987654321;
int visited[51][51];

vector<pair<int, int>> home;
vector<pair<int, int>> chicken;
vector<pair<int, int>> m_chicken;
vector<vector<int>> l_chicken;

void	combi(int start, vector<int> v)
{
	if (v.size() == m){
		l_chicken.push_back(v);
		return ;
	}
	for(int i = 0; i < chicken.size(); i++){
		v.push_back(i);
		combi(i, v);
		v.pop_back();
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
			if (a[i][j] == 1) home.push_back(pair(i,j));
			else if (a[i][j] == 2) chicken.push_back(pair(i,j));
		}
	}
	vector<int> v;
	combi(-1, v);
	for(vector<int> c_chicken : l_chicken){
		int ret = 0;
		for(pair<int, int> h_home : home){
			int _min = 987654321;
			for (int ch : c_chicken){
				int _dist = abs(h_home.first - chicken[ch].first) + abs(h_home.second - chicken[ch].second);
				_min = min(_min, _dist);
			}
			ret += _min;
		}
		result = min(result, ret);
	}
	cout << result << "\n";
}
