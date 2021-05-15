#include <bits/stdc++.h>
using namespace std;

int N, M, res;
int arr[101];

void dfs(int size, int tmp, int time)
{
    if(tmp == N || !time)
    {
        res = max(res, size);
        return;
    }
    if(tmp + 1 <= N)
        dfs(size + arr[tmp + 1], tmp+1, time-1);
    if(tmp + 2 <=N)
        dfs(size/2 + arr[tmp + 2], tmp +2, time-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> N >> M;

    for(int i = 1; i<=N; i++)
        cin >> arr[i];
    dfs(1, 0, M);
    cout << res << '\n';
    return 0;
}