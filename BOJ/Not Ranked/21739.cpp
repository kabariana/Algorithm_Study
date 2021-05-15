#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long ll;

ll dp[10001] = { 1, 1, 2, 5 };

int main()
{
	int n;
	cin >> n;

	for (int i = 4; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			dp[i] += dp[j] * dp[i - j - 1];
			dp[i] %= MOD;
		}
	}
	cout << dp[n] << '\n';
	return 0;
}