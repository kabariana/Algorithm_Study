#include <bits/stdc++.h>
#define MAX 100000

int V, d, far;
bool visited[MAX + 1];
std::vector<std::pair<int, int>> graph[MAX + 1];

// dfs
void DFS(int x, int c)
{
    if(visited[x])
        return;

    visited[x] = true;

    if(d < c)
    {
        d = c;
        far = x;
    }

    for(int i = 0; i<graph[x].size(); i++)
        DFS(graph[x][i].first, c + graph[x][i].second);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> V;

    for(int i = 0; i<V; i++)
    {
        int u;
        std::cin >> u;

        while(true)
        {
            int v, cost;
            std::cin >> v;
            if(v == -1)
                break;
            std::cin >> cost;
            graph[u].push_back({v, cost});
        }
    }

    DFS(1, 0);
    memset(visited, false, sizeof(visited));
    d = 0;
    DFS(far, 0);

    std::cout << d <<'\n';
    return 0;
}