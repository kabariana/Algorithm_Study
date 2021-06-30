#include <bits/stdc++.h>

const int SIZE = 2000 + 1;

int dp[SIZE][SIZE];
int arr[SIZE];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, M, S, E;
    std::cin >> N;
    for(int i = 1; i<=N; i++)
    {
        std::cin >> arr[i];
        dp[i][i] = 1;
        
        // 두 자리가 같은 경우, 1 1 / 2 2 
        if(i != 1 && arr[i-1]==arr[i])
            dp[i-1][i] = 1;
    }
    for(int i = 2; i< N; i++)
    {
        for(int j =1; i + j <= N; j++)
        {
            if(arr[j] == arr[i+j] && dp[j + 1][i + j - 1] == 1)
                dp[j][i + j] = 1;
        }
    }
    std::cin >> M;
    for(int i = 0; i<M; i++)
    {
        std::cin >> S >> E;
        std::cout << dp[S][E] << '\n';
    }
    return 0;
}