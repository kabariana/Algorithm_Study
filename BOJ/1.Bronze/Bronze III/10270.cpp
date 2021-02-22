#include <bits/stdc++.h>
typedef long long ll;

const int mod = int(1e9) + 7;
ll dp[100001] = {1, };

void func()
{
    for(int i = 1; i<100001; i++)
        dp[i] = i*dp[i-1]%mod;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    func();

    while(T--)
    {
        int n;
        std::cin >> n;
        std::cout << dp[n] - 1 << '\n';
    }
    return 0;
}