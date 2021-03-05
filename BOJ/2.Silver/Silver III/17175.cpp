#include <bits/stdc++.h>

int dp[51];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    dp[0] = dp[1] = 1;
    for(int i = 2; i<=50; i++)
        dp[i] = (1 + dp[i-1] + dp[i-2])%1000000007;

    std::cout << dp[n];
    return 0;
}