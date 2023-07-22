#include "../test.hpp"

//#include <bits/stdc++.h>
using namespace std;

int main()
{
	string	str;

	getline(cin ,str);
	for (int i = 0; i < str.length(); i++)
	{
		if (islower(str[i]))
		{
			if (str[i] <= 'm')
				str[i] += 13;
			else
				str[i] = 'a' + (13 - ('z' - str[i])) - 1;
			cout << str[i];
		}
		else if (isupper(str[i]))
		{
			if (str[i] <= 'M')
				str[i] += 13;
			else
				str[i] = 'A' + (13 - ('Z' - str[i])) - 1;
			cout << str[i];
		}
		else
			cout << str[i];

	}
}

