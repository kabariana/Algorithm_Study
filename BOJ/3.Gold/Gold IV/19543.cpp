#include <bits/stdc++.h>

const int MAX = 1e5;

std::vector<int> graph[MAX + 1];
bool visited[MAX + 1];

int N, S, D, res;

int dfs(int v, int depth)
{
    visited[v] = true;
    int max = depth;
    for(auto i : graph[v])
    {
        if(!visited[i])
            max = std::max(max, dfs(i, depth+1));
    }
    if(max - depth >= D && v != S)
        res += 2;
    return max;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> S >> D;

    for(int i = 0; i<N-1; i++)
    {
        int x, y;
        std::cin>> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(S, 0);
    std::cout << res <<'\n';
    return 0;
}