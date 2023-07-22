#include "../test.hpp"
// 	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	'\n' 사용하기...!

//	2의 배수보다 5의 배수가 더 적게 나온다는 추론 같이 간단한거 더 생각하고 코드 짜기
//#include "bits/stdc++.h"
using namespace std;
int t, n, f, v;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		f = 0;
		cin >> n;
		for (int k = 5; k <= n; k *= 5)
		{
			f += n / k ;
		}
		cout << f << '\n';
	}
}


