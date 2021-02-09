#include <bits/stdc++.h>
typedef long long ll;

ll fibo[81];
ll dp[81];

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    fibo[1] = fibo[2] = 1;
    for(int i = 3; i< 81; i++)
        fibo[i] = fibo[i-1] + fibo[i-2];
    
    dp[1] = 4, dp[2] = 6;
    for(int i = 3; i<81; i++)
        dp[i] = dp[i-1] + 2*fibo[i];

    std::cout << dp[n];
    return 0;
}