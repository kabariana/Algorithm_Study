#include <bits/stdc++.h>
typedef long long ll;

ll dp[70];

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4; i<70; i++)
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4];

    while(T--)
    {
        int n;
        std::cin >> n;
        std::cout << dp[n] <<'\n';
    }
    return 0;
}