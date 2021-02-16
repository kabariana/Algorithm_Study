// 2 가지의 경우로 나눠서 생각
// 1. 마지막 계단과, 마지막 바로 이전의 계단을 밟음 
// n, n-1, n-2로 생각할 수도 있는데, 연속된 3개의 계단을 밟을 수는 없으니
// <n, n-1, n-3>
// 2. 마지막 계단과, 마지막의 전전 계단을 밟음
// <n, n-2>
#include <bits/stdc++.h>

int dp[300];

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int* arr = new int[n];

    for(int i = 0; i<n; i++)
        std::cin >> arr[i];
    
    dp[0] = arr[0];
    dp[1] = std::max(arr[0] + arr[1], arr[1]);
    dp[2] = std::max(arr[0] + arr[2], arr[1] + arr[2]);
    for(int i = 3; i<n; i++)
        dp[i] = std::max(dp[i-2] + arr[i], dp[i-3]+arr[i-1] + arr[i]);
    
    std::cout << dp[n-1];
    delete[] arr;
    return 0;
}