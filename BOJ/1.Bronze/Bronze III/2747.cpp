#include <bits/stdc++.h>

typedef long long int ll;

ll dp[45];

ll func(int n)
{
	if (n <= 1) return n;
	if (dp[n]) return dp[n];
	dp[n] = func(n - 1) + func(n - 2);
	return dp[n];
}

int main(int argc, char* argv[])
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr), std::cout.tie(nullptr);

	int n;
	std::cin >> n;

	std::cout << func(n);
	return 0;
}