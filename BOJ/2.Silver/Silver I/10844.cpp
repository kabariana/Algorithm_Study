// dp? 슬라이딩 윈도우?
#include <bits/stdc++.h>
#define MOD 1000000000

int arr[2][12];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, res = 9;
    std::cin >> N;

    for(int i = 2; i<11; i++)
        arr[1][i] = 1;
    
    for(int i = 2; i<=N; i++)
    {
        res = 0;
        for(int j = 1; j<11; j++)
        {
            arr[i%2][j] = (arr[(i-1)%2][j-1] + arr[(i-1)%2][j+1])%MOD;
            res = (res + arr[i%2][j]) % MOD;
        }
    }

    std::cout << res <<'\n';
    return 0;
}