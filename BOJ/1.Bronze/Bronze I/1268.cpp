#include <bits/stdc++.h>

int arr[1001][5];
int cnt[1001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    
    for(int i = 0; i<n; i++)
        for(int j = 0; j<5; j++)
            std::cin >> arr[i][j];

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i == j)
                continue;
            for(int k = 0; k<5; k++)
            {
                if(arr[i][k] == arr[j][k])
                {
                    cnt[i]++;
                    break;
                }
            }
        }
    }
    int max = INT_MIN, index = 0;
    for(int i = 0; i<n; i++)
    {
        if(cnt[i] > max)
        {
            max = cnt[i];
            index = i;
        }
    }
    std::cout << index + 1 <<'\n';
    return 0;
}