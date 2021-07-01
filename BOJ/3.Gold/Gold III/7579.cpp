#include <bits/stdc++.h>

const int SIZE = 101;
int mem[SIZE], cost[SIZE];
int dp[SIZE][SIZE*SIZE];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, M, sum = 0;
    std::cin >> N >> M;
    for(int i = 1; i<=N; i++)
        std::cin >> mem[i];
    for(int i = 1; i<=N; i++)
    {
        std::cin >> cost[i];
        sum += cost[i];
    }

    for(int i = 1; i<=N; i++)
    {
        for(int j = 0; j <= sum; j++)
        {
            if(j - cost[i] >= 0)
                dp[i][j] = std::max(dp[i][j], dp[i-1][j-cost[i]] + mem[i]);
            dp[i][j] = std::max(dp[i][j], dp[i-1][j]);
        }
    }

    for(int i = 0; i<=sum; i++)
    {
        if(dp[N][i] >= M)
        {
            std::cout << i <<'\n';
            break;
        }
    }
    return 0;
}