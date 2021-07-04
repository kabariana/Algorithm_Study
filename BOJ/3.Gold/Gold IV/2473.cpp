// DFS - 사이클 찾기
#include <bits/stdc++.h>

const int SIZE = 1e5 + 1;
int arr[SIZE];
int visited[SIZE];
int first[SIZE]; // dfs 시작

int dfs(int start, int curr, int cnt)
{
    if(visited[curr])
    {
        // 사이클
        if(first[curr] != start)
            return 0;
        return cnt - visited[curr];
    }
    first[curr] = start;
    visited[curr] = cnt;
    return dfs(start, arr[curr], cnt + 1);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC;
    std::cin >> TC;

    while(TC--)
    {
        int N;
        std::cin >> N;

        memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));
        memset(first, 0, sizeof(first));

        for(int i = 1; i<=N; i++)
            std::cin >> arr[i];

        int cnt = 0;
        for(int i = 1; i<=N; i++)
            if(!visited[i])
                cnt+=dfs(i, i, 1);
        std::cout << N - cnt << '\n';
    }
    return 0;
}