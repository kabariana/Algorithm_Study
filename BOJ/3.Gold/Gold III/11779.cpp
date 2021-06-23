// dijkstra 알고리즘
#include <bits/stdc++.h>
#define MAX 1000

const int INF = 987654321;

typedef std::pair<int, int> pii;
std::vector<pii> graph[MAX + 1];
int dist[MAX + 1];
int route[MAX + 1];
std::vector<int> route_v;
int n, m, s, e;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> n >> m;

    for(int i = 1; i<= n; i++)
        dist[i] = INF;
    for(int i = 0; i<m; i++)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }
    std::cin >> s >> e;

    std::priority_queue<pii> pq;
    pq.push({0, s});
    dist[s] = 0;

    while(!pq.empty())
    {
        int cost = -pq.top().first;
        int current = pq.top().second;
        pq.pop();

        for(int i = 0; i < graph[current].size(); i++)
        {
            int next = graph[current][i].first;
            int nextCost = graph[current][i].second;

            if(dist[next] > cost + nextCost)
            {
                route[next] = current;
                dist[next] = cost + nextCost;
                pq.push({-dist[next], next});
            }
        }
    }
    std::cout << dist[e] <<'\n';
    int tmp = e;
    while(tmp)
    {
        route_v.push_back(tmp);
        tmp = route[tmp];
    }
    std::cout << route_v.size() <<'\n';
    for(int i = route_v.size()-1; i>= 0; i--)
        std::cout << route_v[i] <<' ';
    std::cout <<'\n';
    return 0;
}