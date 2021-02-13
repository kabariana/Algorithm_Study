#include <bits/stdc++.h>
#define MAX_SIZE 100001

int arr[MAX_SIZE];
int dp[MAX_SIZE];

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    for(int i = 1 ; i<=n; i++)
        std::cin >> arr[i];
    
    for(int i = 1; i<=n; i++)
    {
        if(dp[i-1] + arr[i] > arr[i])
            dp[i] = dp[i-1] + arr[i];
        else
            dp[i] = arr[i];
    }
    int max = dp[1];
    for(int i = 2; i<=n; i++)
        if(max < dp[i])
            max = dp[i];
    
    std::cout << max;
    return 0;
}