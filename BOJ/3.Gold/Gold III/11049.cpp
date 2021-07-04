// 얼마전에 프로그래머스에서 푼 문제?
#include <bits/stdc++.h>

int arr[501][2];
int dp[501][501];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;
    for(int i = 1; i<=N; i++)
        std::cin >> arr[i][0] >> arr[i][1];

    for(int i = 1; i<N; i++)
        dp[i][i+1] = arr[i][0] * arr[i][1] * arr[i+1][1];
    
    for(int z = 2; z <= N; z++)
    {
        for(int i = 1; i<=N-z; i++)
        {
            int j = i + z;
            for(int k = i; k < j; k++)
            {
                int result = dp[i][k] + dp[k + 1][j] + arr[i][0] * arr[k][1] * arr[j][1];
                if(!dp[i][j] || dp[i][j] > result)
                    dp[i][j] = result;
            }
        }
    }
    std::cout << dp[1][N];
    return 0;
}