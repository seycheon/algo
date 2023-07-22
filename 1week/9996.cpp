#include "../test.hpp"

//#include <bits/stdc++.h>
using namespace std;

int main()
{
	int		i = 0;
	int		n;
	string	str;
	string	check;
	string	front;
	string	back;

	cin >> n;
	cin >> str;

	while (str[i])
	{
		if (str[i] == '*')
			break ;
		i++;
	}
	front = str.substr(0, i);
	back = str.substr(i + 1);
	for(int j = 0; j < n; j++)
	{
		cin >> check;
		if ((check.size() >= front.size() + back.size()) && front == check.substr(0, i)
			&& back == check.substr(check.size() - back.size()))
			cout << "DA" << "\n";
		else
			cout << "NE" << "\n";
	}
	return (0);
}
