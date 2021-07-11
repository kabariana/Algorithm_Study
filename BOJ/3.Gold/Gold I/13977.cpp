#include <bits/stdc++.h>
using ll = long long;

const ll MOD = 1e9 + 7;
ll dp[4000001];

ll pow(ll a, ll b)
{
    if(b == 1)
        return a % MOD;
    if(b % 2 == 1)
        return pow(a, b-1) * a % MOD;
    return pow(a * a % MOD, b / 2);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC;
    std::cin >> TC;

    // factorial
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= 4000000; i++)
        dp[i] = dp[i-1] * i % MOD;    

    while(TC--)
    {
        int N, K;
        std::cin >> N >> K;
        std::cout << dp[N] * pow(dp[N-K] * dp[K] % MOD, MOD - 2) % MOD <<'\n';
    }
    return 0;
}