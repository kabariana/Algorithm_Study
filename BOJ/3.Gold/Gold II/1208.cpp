#include <bits/stdc++.h>
using ll = long long;

int N, S;
std::vector<int> arr;
std::map<int, int> m;
ll res;

void leftDFS(int sum, int now, int end)
{
    if(now == end)
    {
        m[sum]++;
        return;
    }
    leftDFS(sum, now + 1, end);
    leftDFS(sum + arr[now], now + 1, end);
}

void rightDFS(int sum, int now, int end)
{
    if(now == end)
    {
        if(m[S-sum] > 0)
            res += m[S-sum];
        else if(sum == S)
            res += 1;
        return;
    }
    rightDFS(sum, now + 1, end);
    rightDFS(sum + arr[now], now + 1, end);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> S;
    arr.resize(N);
    for(int i = 0; i<N; i++)
        std::cin >> arr[i];
    
    int pivot = N/2;
    leftDFS(0, 0, pivot); // 2 ^ (N/2)
    rightDFS(0, pivot, N); // 2 ^ (N/2)

    if(S == 0)
        res--;
    std::cout << res << '\n';
    return 0;
}