#include <bits/stdc++.h>
#define SIZE 100002

int dp[2][SIZE];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC, n;
    std::cin >> TC;

    while(TC--)
    {
        std::cin >> n;
        for(int i = 0; i<2; i++)
            for(int j = 2; j < n + 2; j++)
                std::cin >> dp[i][j];

        for(int j = 2; j < n+2; j++)
        {
            for(int i = 0; i<2; i++)
            {
                if(i == 1) 
                    dp[i][j] += std::max(dp[i-1][j-1], dp[i-1][j-2]);
                else
                    dp[i][j] += std::max(dp[i+1][j-1],dp[i+1][j-2]);
            }
        }
        std::cout << std::max(dp[0][n+1], dp[1][n+1]) <<'\n';
    }
    return 0;
}