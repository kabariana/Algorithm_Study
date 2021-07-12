// 52개의 카드에서 N개를 뽑음
// 52 C N
// 포카드를 만들수 있는 경우? 없는 경우?
// 있는 경우 : 같은 숫자를 가진 다른 문양의 4장의 카드
// 없는 경우 : 같은 숫자를 4개 미만으로 뽑을 때
#include <bits/stdc++.h>

const int MOD = 1e4 + 7;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int dp[53][53];
    dp[0][0] = dp[1][0] = dp[1][1] = 1;
    for(int i = 2; i < 53; i++)
    {
        dp[i][0] = 1;
        for(int j = 1; j<53; j++)
        {
            dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
            dp[i][j] %= MOD;
        }
    }

    int n;
    std::cin >> n;

    int dp2[53][53];
    dp2[0][0] = 1;
    // 숫자 13개
    for(int i = 1; i<=13; i++)
    {
        for(int j = 0; j<=3; j++)
        {
            for(int k = 0; k <= n; k++)
            {
                if(k + j <= n)
                {
                    dp2[i][k+j] += dp2[i-1][k] * dp[4][j];
                    dp2[i][k+j] %= MOD;
                }
            }
        }   
    }
    std::cout << (dp[52][n] - dp2[13][n] + MOD) % MOD << '\n';
    return 0;
}