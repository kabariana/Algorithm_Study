#include <bits/stdc++.h>
#define MOD 15746
typedef long long int ll;

ll dp[1000001];

ll func(int n)
{
    dp[1] = 1, dp[2] = 2;
    if(dp[n]) return dp[n];
    dp[n] = (func(n-1) + func(n-2))%MOD;
    return dp[n];
}


int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    func(n);
    std::cout << dp[n];
    return 0;
}