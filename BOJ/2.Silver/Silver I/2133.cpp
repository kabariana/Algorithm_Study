#include <bits/stdc++.h>

long long dp[31] = {1, 0, 3};

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin>> n;

    for(int i = 4; i <= n; i++)
    {
        if(i%2 == 0)
            dp[i] = dp[2] * dp[i-2];
        for(int j = i-4; j >= 0; j-=2)
            dp[i] += 2*dp[j];
    }
    std::cout << dp[n];
    return 0;
}