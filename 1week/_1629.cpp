#include "../test.hpp"

//#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


ll cal(int a, int b, int c)
{
	if (b == 1)
		return (a % c);
	if (b % 2 == 0)
	{
		long long r = cal(a, b / 2, c);
		return (( r * r ) % c);
	}
	else
		return ((a * cal(a, b - 1, c)) % c);
}

int main()
{
	int a,b,c;

	cin >> a >> b >> c;
	cout << cal(a,b,c);
}
