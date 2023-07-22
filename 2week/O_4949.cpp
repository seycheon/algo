#include "../test.hpp"

//#include "bits/stdc++.h"

using namespace std;
int n;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while(1)
	{
		string str;
		getline(cin, str);
		if (str.length() == 1 && str[0] == '.')
			break ;
		stack<char> st;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '.')
				break ;
			if (str[i] == '(' || str[i] == '[')
				st.push(str[i]);
			else if (str[i] == ')')
			{
				if (st.size() > 0 && st.top() == '(')
					st.pop();
				else
					st.push(str[i]);
			}
			else if (str[i] == ']')
			{
				if (st.size() > 0 && st.top() == '[')
					st.pop();
				else
					st.push(str[i]);
			}
		}
		if (st.size())
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
}
