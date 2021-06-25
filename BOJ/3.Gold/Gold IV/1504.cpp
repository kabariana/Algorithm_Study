// 다익스트라
#include <bits/stdc++.h>
#define MAX 801

const int INF = 1e9;
int N, M, ans;

std::vector<std::pair<int, int>> graph[MAX];

std::vector<int> dijkstra(int start, int n)
{
    std::vector<int> dist(n, INF);
    dist[start] = 0;

    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
    pq.push({ 0, start });

    while (!pq.empty())
    {
        int cost = pq.top().first;
        int current = pq.top().second;
        pq.pop();

        if (dist[current] < cost)
            continue;

        for (int i = 0; i < graph[current].size(); i++)
        {
            int next = graph[current][i].first;
            int nextCost = graph[current][i].second + cost;

            if (dist[next] > nextCost)
            {
                dist[next] = nextCost;
                pq.push({ nextCost, next });
            }
        }
    }
    return dist;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int a, b, c;
        std::cin >> a >> b >> c;

        graph[a].push_back({ b, c });
        graph[b].push_back({ a, c });
    }

    int v1, v2;
    std::cin >> v1 >> v2;

    std::vector<int> base = dijkstra(1, N + 1);
    std::vector<int> node1 = dijkstra(v1, N + 1); 
    std::vector<int> node2 = dijkstra(v2, N + 1);

    // case 1 : 1 -> v1 -> v2 -> N;
    // case 2 : 1 -> v2 -> v1 -> N;
    ans = std::min(base[v1] + node1[v2] + node2[N], base[v2] + node2[v1] + node1[N]);

    if (ans >= INF || ans < 0)
        std::cout << -1 << '\n';
    else
        std::cout << ans << '\n';
    return 0;
}