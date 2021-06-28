// 이것은 DP문제로구나
#include <bits/stdc++.h>

const int MAX = 1e9;

int dp[1001][3];
int cost[1001][3];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int N, result;
    std::cin >> N;

    for(int i = 1; i<=N; i++)
        std::cin >> cost[i][0] >> cost[i][1] >> cost [i][2];
    
    for(int i = 0; i<3; i++)
    {
        for(int k = 0; k < 3; k++)
        {
            if(i == k) 
                dp[1][k] = cost[1][k];
            else
                dp[1][k] = MAX;
        }

        for(int k = 2; k <= N; k++)
        {
            dp[k][0] = cost[k][0] + std::min(dp[k-1][1], dp[k-1][2]);
            dp[k][1] = cost[k][1] + std::min(dp[k-1][0], dp[k-1][2]);
            dp[k][2] = cost[k][2] + std::min(dp[k-1][1], dp[k-1][0]);
        }
        for(int k = 0; k <3; k++)
            if(i != k)
                result = std::min(result, dp[N][k]);
    }
    std::cout << result <<'\n';
    return 0;
}