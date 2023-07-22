#include "../test.hpp"
// 오류 해결 못함

//#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
int n;
string str;
vector<ll> v;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int j = 0; j < n; j++)
	{
		cin >> str;
		str = str;
		int p = -1, flag = 0;
		for (int i = 0; i <= str.length(); i++)
		{
			if (isalpha(str[i]) || str[i] == '\0')
			{
				if (flag)
				{
					string a;
					a = str.substr(p + 1, i - p - 1);
					v.push_back(stoll(a));
					flag = 0;
				}
				p = i;
			}
			else if (flag == 0 && !isalpha(str[i]))
				flag = 1;
		}
	}
	sort(v.begin(), v.end());
	for (auto it : v)
		cout << it << endl;
}
