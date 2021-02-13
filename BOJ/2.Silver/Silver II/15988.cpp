#include <bits/stdc++.h>
#define MOD 1000000009

typedef long long ll;

ll dp[1000001];

ll func(int n)
{
    dp[1] = 1, dp[2] = 2, dp[3] = 4;
    if(dp[n]) return dp[n];
    dp[n] = (func(n-1) + func(n-2) + func(n-3))%MOD;
    return dp[n];
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T, num;
    std::cin >> T;

    while(T--)
    {
        std::cin>> num; 
        std::cout << func(num) << '\n';
    }
    return 0;
}