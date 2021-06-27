#include <bits/stdc++.h>
#define SIZE 50000

int dp[SIZE + 1];
const int MOD = 1e9 + 9;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    dp[1] = 1, dp[2] = 1, dp[3] = 2;
    for(int i = 4; i<=N; i++)
        dp[i] = (dp[i-1] + dp[i-3])%MOD;
    std::cout << dp[N];
    return 0;
}