#include <bits/stdc++.h>

int dp[1001];

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int* arr = new int[n];
    for(int i = 0; i<n; i++)
        std::cin >> arr[i];

    int ans = 1;
    std::fill_n(dp, 1001, 1);
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<i; j++)
        {
            if(arr[i]<arr[j])
                dp[i] = std::max(dp[i], dp[j]+1);
        }
        ans = std::max(ans, dp[i]);
    }
    std::cout << ans;
    delete[] arr;
    return 0;
}