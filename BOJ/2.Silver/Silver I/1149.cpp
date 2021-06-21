#include <bits/stdc++.h>
#define SIZE 1000

int arr[SIZE][3];
int dp[SIZE][3];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    for(int i = 0; i<n; i++)
        for(int j = 0; j<3; j++)
            std::cin >> arr[i][j];

    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];

    for(int i = 1; i < n; i++)
    {
        dp[i][0] = std::min(dp[i-1][1], dp[i-1][2]) + arr[i][0];
        dp[i][1] = std::min(dp[i-1][0], dp[i-1][2]) + arr[i][1];
        dp[i][2] = std::min(dp[i-1][0], dp[i-1][1]) + arr[i][2]; 
    }

    int res = INT_MAX;

    for(int i = 0; i < 3; i++)
        if(dp[n-1][i] < res)    
            res = dp[n-1][i];

    std::cout << res << '\n';
    return 0;
}