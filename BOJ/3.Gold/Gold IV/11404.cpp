#include <bits/stdc++.h>
#define MAX 101
#define INF 100001

int N, M;
int graph[MAX][MAX];

void Floyd()
{
    for(int i = 1; i<= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(graph[j][i] == 0)
                continue;
            for(int k = 1; k <= N; k++)
            {
                if(graph[i][k] == 0 || j == k)
                    continue;
                if(graph[j][k] == 0 || graph[j][k] > graph[j][i] + graph[i][k])
                    graph[j][k] = graph[j][i] + graph[i][k];
            }   
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for(int i = 0; i<M; i++)
    {
        int x, y, w;
        std::cin >> x >> y >> w;

        if(!graph[x][y])
            graph[x][y] = w;
        else
            graph[x][y] = std::min(graph[x][y], w);
    }

    Floyd();

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j<= N; j++)
            std::cout << graph[i][j] << ' ';
        std::cout << '\n';
    }
    return 0;
}