// dijkstra 알고리즘
#include <bits/stdc++.h>
using pii = std::pair<int, int>;

const int SIZE = 1001;
const int INF = INT_MAX;
int N, M;
std::vector<pii> graph[2 * SIZE];
int path[SIZE];

std::vector<int> dijkstra(int start, int v)
{
    std::vector<int> distance(v, INF);
    distance[start] = 0;
    std::priority_queue<pii> pq;

    pq.push({0, start});
    while(!pq.empty())
    {
        int cost = -pq.top().first;
        int curr = pq.top().second;
        pq.pop();

        if(distance[curr] < cost)
            continue;
        
        for(int i = 0; i <graph[curr].size(); i++)
        {
            int nxt = graph[curr][i].first;
            int nxtCost = cost + graph[curr][i].second;

            if(distance[nxt] > nxtCost)
            {
                distance[nxt] = nxtCost;
                path[nxt] = curr;
                pq.push({-nxtCost, nxt});
            }
        }
    }
    return distance;
}


int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;
    N++; 
    for(int i = 0; i<M; i++)
    {
        int u, v, w;
        std::cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }
    int s, e;
    std::cin >> s >> e;

    std::vector<int> res = dijkstra(s, N);

    std::cout << res[e] <<'\n';

    std::vector<int> backtracking;
    while(e)
    {
        backtracking.push_back(e);
        e = path[e];
    }
    std::cout << backtracking.size() << '\n';
    for(int i = backtracking.size() - 1; i >= 0; i--)
        std::cout << backtracking[i] << ' ';
    return 0;
}