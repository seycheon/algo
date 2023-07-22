#include "../test.hpp"

//#include "bits/stdc++.h"

using namespace std;
int h,w;
char c;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> h >> w;

	char a[101][101] = {};
	int b[101][101];

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> c;
			a[i][j] = c;
			b[i][j] = -1;
		}
	}

	int flag;

	for (int i = 0; i < h; i++)
	{
		flag = 0;
		for (int j = 0; j < w; j++)
		{
			if (a[i][j] == 'c')
			{
				b[i][j] = 0;
				flag = 1;
			}
			else if (j > 0 && flag && (a[i][j - 1] > 0))
				b[i][j] = b[i][j - 1] + 1;
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}
