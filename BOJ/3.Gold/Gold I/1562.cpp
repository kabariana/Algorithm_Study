// 비트 마스킹 + 다이내믹 프로그래밍
#include <bits/stdc++.h>

const int MOD = 1e9;
int N, dp[100][10][1<<10]; // N: 1 ~ 100, 각 1 ~ 9, bit : 2^10

int foo(int position, int val, int current)
{
    if(position == N)
        return (current == (1<<10)-1);
    int& ret = dp[position][val][current];
    if(ret != -1)
        return ret;
    ret = 0;

    if(val > 0)
    {
        ret += foo(position + 1, val - 1, current | 1<<(val - 1));
        ret %= MOD;
    }
    if(val < 9)
    {
        ret += foo(position + 1, val + 1, current | 1 << (val + 1));
        ret %= MOD;
    }
    return ret;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;
    memset(dp, -1, sizeof(dp));

    int res = 0;
    for(int i = 1; i<10; i++)
    {
        res += foo(1, i, 1<<i);
        res %= MOD;
    }
    std::cout << res <<'\n';
    return 0;
}