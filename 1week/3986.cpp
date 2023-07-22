#include "../test.hpp"

//#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	int cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		stack<char> st;

		cin >> str;
		for (int j = 0; j < str.size(); j++)
		{
			if (!st.empty() && (st.top() == str[j]))
				st.pop();
			else
				st.push(str[j]);
		}
		if (st.empty())
			cnt += 1;
	}
	cout << cnt;
}
