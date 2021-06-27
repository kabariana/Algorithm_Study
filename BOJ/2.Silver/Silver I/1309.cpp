#include <bits/stdc++.h>

const int MOD = 9901;
int dp[3][100001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    dp[0][1] = dp[1][1] = dp[2][1] = 1;

    for(int i = 2; i<=n; i++)
    {
        dp[0][i] = (dp[0][i-1] + dp[1][i-1] + dp[2][i-1])%MOD;
        dp[1][i] = (dp[0][i-1] + dp[2][i-1])%MOD;
        dp[2][i] = (dp[0][i-1] + dp[1][i-1])%MOD;
    }
    std::cout << (dp[0][n] + dp[1][n] + dp[2][n])%MOD <<'\n';
    return 0;
}