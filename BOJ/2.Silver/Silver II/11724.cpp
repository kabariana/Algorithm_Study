// DFS
#include <bits/stdc++.h>
#define MAX 1001

std::vector<int> graph[MAX];
bool visited[MAX];
int N, M;

void DFS(int n)
{
    visited[n] = true;
    for(int i = 0; i<graph[n].size(); i++)
    {
        int next = graph[n][i];
        if(!visited[next])
            DFS(next);
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for(int i = 0; i<M; i++)
    {
        int x, y;
        std::cin >> x >> y;

        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int cnt = 0;

    for(int i = 1; i<= N; i++)
    {
        if(!visited[i])
        {
            DFS(i);
            cnt++;
        }
    }
    std::cout << cnt << '\n';
    return 0;
}