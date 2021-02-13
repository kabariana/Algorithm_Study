#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int dp[1001];
    int n;
    std::cin >> n;

    dp[1] = 1; // --> 상근 승
    dp[2] = 0; // --> 창영 승
    dp[3] = 1; // --> 상근 승
    dp[4] = 1; // --> 상근 승

    for(int i = 5; i<1001; i++)
    {
        if(3 == dp[i-1] + dp[i-3] + dp[i-4])
            dp[i] = 0;
        else
            dp[i] = 1;
    }

    if(dp[n] == 1)
        std::cout << "SK";
    else
        std::cout << "CY";
    return 0;
}