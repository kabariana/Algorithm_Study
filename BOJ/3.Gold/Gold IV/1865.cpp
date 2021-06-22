#include <bits/stdc++.h>
#define MAX 501

int N, M, W;

struct edge{
    int S, E, T;
};

bool bellmanFord(int n, std::vector<edge> edges)
{   
    std::vector<int> distance(N + 1, MAX);

    int s, e, t;
    distance[1] = 0;
    for(int i = 1; i<N; i++)
    {
        for(int j = 0; j< edges.size(); j++)
        {
            s = edges[j].S;
            e = edges[j].E;
            t = edges[j].T;
            if(distance[e] > distance[s] + t)
                distance[e] = distance[s] + t;
        }
    }
    for(int i = 0; i<edges.size(); i++)
    {
        s = edges[i].S;
        e = edges[i].E;
        t = edges[i].T;
        if(distance[e] > distance[s] + t)
            return true;
    }
    return false;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC, s, e, t;
    std::cin >> TC;

    while(TC--)
    {
        std::cin >> N >> M >> W;

        std::vector<edge> edges;

        for(int i = 0; i<M; i++)
        {
            std::cin >> s >> e >> t;
            edges.push_back({s, e, t});
            edges.push_back({e, s, t});
        }

        for(int i = 0; i<W; i++)
        {
            std::cin >> s >> e >> t;
            edges.push_back({s, e, -t});
        }
        if(bellmanFord(N, edges)) 
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}