#include <bits/stdc++.h>

long long dp[33334][3];
const int MOD = 1e9+9;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    dp[1][0] = 0;
    dp[1][1] = 1;
    dp[1][2] = 1;
    for(int i = 2; i<=n; i++)
        for(int j = 0; j<3; j++)
            dp[i][j] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2])%MOD;
    
    std::cout << dp[n][0] <<'\n';
    return 0;
}