// 트리는 특수한 형태의 그래프이다.
#include <bits/stdc++.h>
#define MAX 10000

int N;
bool visited[MAX + 1];
std::vector<std::pair<int, int>> graph[MAX + 1];

int res, e;
void dfs(int vertex, int len)
{
    if(visited[vertex])
        return;
    visited[vertex] = true;
    if(res < len)
    {
        res = len;
        e = vertex;
    }

    for(int i = 0; i<graph[vertex].size(); i++)
        dfs(graph[vertex][i].first, len + graph[vertex][i].second);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;
    int p, c, w;
    for(int i = 0; i<N-1; i++)
    {
        std::cin >> p >> c >> w;
        graph[p].push_back({c, w});
        graph[c].push_back({p, w});
    }
    dfs(1, 0);
    res = 0;
    memset(visited, false, sizeof(visited));
    dfs(e, 0);
    std::cout << res <<'\n';
    return 0;
}