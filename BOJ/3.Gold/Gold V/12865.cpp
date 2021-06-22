// 냅색
#include <bits/stdc++.h>

int item[101][2], dp[101][100001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, K;

    std::cin >> N >> K;

    for(int i = 1; i<= N; i++)
        std::cin >> item[i][0] >> item[i][1];

    for(int i = 1; i<= N; i++)
    {
        int tmpW = item[i][0], tmpV = item[i][1];
        for(int j = 0; j <= K; j++)
        {
            if(j < item[i][0])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = std::max(dp[i-1][j], dp[i-1][j-tmpW] + tmpV);
        }
    }

    std::cout << dp[N][K] <<'\n';
    return 0;
}