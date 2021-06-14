#include <bits/stdc++.h>

int dp[50001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    dp[1] = 1;
    for(int i = 1; i<=n; i++)
    {
        dp[i] = dp[1] + dp[i-1];
        for(int j = 2; j*j <= i; j++)   
            dp[i] = std::min(dp[i], 1 + dp[i-j*j]);
    }
    std::cout << dp[n];
    return 0;
}