#include <bits/stdc++.h>

int dist[20001];
std::vector<std::pair<int, int>> graph[20001];
const int INF = INT_MAX;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int V, E, K;
    std::cin >> V >> E >> K;

    for(int i = 0; i<E; i++)
    {
        int u, v, w;
        std::cin >> u >> v >> w;
        graph[u].push_back({w, v});
    }
    std::fill(dist, dist + V + 1, INF);

    dist[K] = 0;
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
    pq.push({dist[K], K});

    while(!pq.empty())
    {
        std::pair<int, int> current = pq.top();
        pq.pop();
        int d = current.first;
        int index = current.second;
        if(dist[index] != d)
            continue;
        for(int i = 0; i <graph[index].size(); i++)
        {
            std::pair<int, int> next = graph[index][i];
            int cost = next.first;
            int nextIndex = next.second;
            if(dist[nextIndex] > d + cost)
            {
                dist[nextIndex] = d + cost;
                pq.push({dist[nextIndex], nextIndex});
            }
        }
    }
    for(int i = 1; i<= V; i++)
        if(dist[i] == INF)
            std::cout << "INF\n";
        else
            std::cout << dist[i] <<'\n';
    return 0;
}