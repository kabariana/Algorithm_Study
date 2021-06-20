// 플로이드 - 와샬
#include <bits/stdc++.h>
#define INF 2e9
#define SIZE 101

int N, M;
int graph[SIZE][SIZE];

void floyd(void)
{
    for(int k = 1; k <= N; k++) {
        for(int i = 1; i <= N; i++) {
            for(int j = 1; j <= N; j++) {
                if(i == j)
                    continue;
                else if(graph[i][k] && graph[k][j])
                {
                    if(graph[i][j] == 0)
                        graph[i][j] = graph[i][k] + graph[k][j];
                    else   
                        graph[i][j] = std::min(graph[i][j], graph[i][k] + graph[k][j]);
                }
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
        int x, y;
        std::cin >> x >> y;
        graph[x][y] = graph[y][x] = 1;
    }

    floyd();

    int res = INF;
    int index = 0;
    for(int i = 1; i<=N; i++)
    {
        int sum = 0;
        for(int j = 1; j<= N; j++)
            sum += graph[i][j];
        if(res > sum)
        {
            res = sum;
            index = i;
        }
    }
    std::cout << index <<'\n';
    return 0;
}