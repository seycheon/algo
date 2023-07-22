#include "../test.hpp"

//#include <bits/stdc++.h>

using namespace std;

int check_pw(string str)
{
	int y_flag = 0, n_flag = 0, cnt = 0, p = 0;
	string s = "aeiou";
	int vec[21] = {};

	for (int i = 0; i < str.length() + 1; i++)
	{
		for (int j = 0; j < s.length(); j++)
		{
			if (str[i] == s[j])
			{
				vec[i] = 1;
				y_flag = 1;
			}
		}
		if (i > 0 && str[i] != str[i - 1])
		{
			cnt = i - p;
			p = i;
		}
		if (cnt == 2)
		{
			if (str[i - 1] != 'e' && str[i - 1] != 'o')
				n_flag = 1;
		}
	}
	for (int k = 2; k < str.length(); k++)
	{

		if (vec[k] == vec[k - 1] && vec[k - 1] == vec[k - 2])
			n_flag = 1;
	}
	if (y_flag && !n_flag)
		return (1);
	else
		return (0);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string str;
	int flag = 0;

	while (cin >> str)
	{
		if (str == "end")
			break ;
		flag = check_pw(str);
		if (flag)
			cout << "<" << str << "> is acceptable." << endl;
		else
			cout << "<" << str << "> is not acceptable." << endl;
	}
}

/* 반례
kaa : 마지막에 같은 문자열 나오는 경우 체크 못해줌. for (int i = 0; i < str.length() + 1; i++) 로 수정
*/
