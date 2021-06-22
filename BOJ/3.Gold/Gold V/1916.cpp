// dijkstra
#include <bits/stdc++.h>
#define INF 987654321

std::vector<int> distance(1001);
std::vector<std::pair<int , int>> graph[100001];

int N, M;

void dijkstra(int begin)
{
    distance[begin] = 0;
    std::priority_queue<std::pair<int, int>> pq;
    pq.push({distance[begin], begin});

    while(!pq.empty())
    {
        int current = pq.top().second;
        int d = pq.top().first * -1;
        pq.pop();

        if(distance[current] < d)
            continue;
        
        for(int i = 0; i<graph[current].size(); i++)
        {
            int next = graph[current][i].first;
            int nextD = d + graph[current][i].second;

            if(nextD < distance[next])
            {
                distance[next] = nextD;
                pq.push({nextD*-1, next});
            }
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, M;

    std::cin >> N >> M;

    for(int i = 1; i<= N; i++)
        distance[i] = INF;

    for(int i = 0; i < M; i++)
    {
        int u, v, w;
        std::cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    int begin, end;
    std::cin >> begin >> end;

    dijkstra(begin);

   std::cout << distance[end]; 
   return 0;
}