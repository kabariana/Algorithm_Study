// 다익스트라
#include <bits/stdc++.h>
#define MAX 1001

const int INF = 987654321;

int N, M, X;
std::vector<std::pair<int, int>> graph[MAX];

std::vector<int> dijkstra(int start, int n)
{
    std::vector<int> dist(n, INF);
    dist[start] = 0;

    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
    pq.push({0, start});

    while(!pq.empty())
    {
        int cost =pq.top().first;
        int current = pq.top().second;
        pq.pop();

        if(dist[current] < cost)
            continue;
        
        for(int i = 0; i<graph[current].size(); i++)
        {
            int next = graph[current][i].first;
            int nextCost = graph[current][i].second + cost;

            if(dist[next] > nextCost)
            {
                dist[next] = nextCost;
                pq.push({nextCost, next});
            }
        }
    }
    return dist;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M >> X;

    for(int i = 0; i<M; i++)
    {
        int u, v, w;
        std::cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    int res = -1;
    for(int i = 1; i<=N; i++)
    {
        std::vector<int> tmp1 = dijkstra(i, N+1);
        std::vector<int> tmp2 = dijkstra(X, N+1);

        if(tmp1[X] + tmp2[i] >= INF || tmp1[X] + tmp2[i] < 0)
            continue;
        res = std::max(res, tmp1[X] + tmp2[i]);
    }
    std::cout << res <<'\n';
    return 0;
}