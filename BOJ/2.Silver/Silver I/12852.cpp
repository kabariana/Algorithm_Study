#include <bits/stdc++.h>

const int SIZE = 1e6 + 1;

int past[SIZE];
int dp[SIZE];

int func(int N)
{   
    dp[1] = 0;
    for(int i = 2; i<= N; i++)
    {
        // 3번 Case : 1을 뺀다
        dp[i] = dp[i-1] + 1;
        past[i] = i - 1;

        // 1번 Case : 3으로 나눈다.
        if(i % 3 == 0)
        {
            if(dp[i] > dp[i/3] + 1)
            {
                dp[i] = dp[i/3] + 1;
                past[i] = i/3;
            }
        }

        // 2번 Case : 2로 나눈다.
        if(i % 2 == 0)
        {
            if(dp[i] > dp[i/2] + 1)
            {
                dp[i] = dp[i/2] + 1;
                past[i] = i/2;
            }
        }
    }
    return dp[N];
} 


int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    std::cout << func(N) << '\n';
    while(true)
    {
        std::cout << N << ' ';
        N = past[N];
        if(N == 0)
            break;
    }
    return 0;
}