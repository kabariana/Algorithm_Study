#include <bits/stdc++.h>

int dp[1001] = {0, 1, 3};

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    for(int i = 3; i<=n; i++)
        dp[i] = (dp[i-1] + 2* dp[i-2])%10007;

    std::cout << dp[n];
    return 0;
}