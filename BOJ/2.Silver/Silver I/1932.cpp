// DP 문제
#include <bits/stdc++.h>

int dp[500][500];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, max = 0;
    std::cin >> n;

    for(int i = 0; i<n; i++)
        for(int j = 0; j<=i;j++)
            std::cin >> dp[i][j];
    
    for(int i = 1; i<n; i++)
    {
        for(int j = 0; j<= i; j++)
        {
            if(j == 0) 
                dp[i][j] = dp[i-1][0] + dp[i][j];
            else if(j == i) 
                dp[i][j] = dp[i-1][j-1] + dp[i][j];
            else
                dp[i][j] = std::max(dp[i-1][j-1] + dp[i][j], dp[i-1][j] + dp[i][j]);
            max = std::max(max, dp[i][j]);
        }
    }

    std::cout << max << '\n';
    return 0;
}