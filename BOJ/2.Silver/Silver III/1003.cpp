#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    int dp[41] = {0, 1, 1,};

    for(int i = 3; i<41; i++)
        dp[i] = dp[i-1] + dp[i-2];

    while(T--)
    {
        int n;
        std::cin >> n;
        if(n==0)
            std::cout << "1 0\n";
        else if(n==1)
            std::cout << "0 1\n";
        else 
            std::cout << dp[n-1] << ' ' << dp[n] << '\n';
    }
    return 0;
}