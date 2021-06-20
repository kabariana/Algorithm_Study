#include <bits/stdc++.h>
#define MAX 100

int N;
int graph[MAX][MAX];

void floyd()
{
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            for(int k = 0; k < N; k++)
            {
                if(graph[j][i] && graph[i][k])
                    graph[j][k] = 1;
            }
        }
    }
}


int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;

    for(int i = 0; i < N; i++)
        for(int j = 0; j<N; j++)
            std::cin >> graph[i][j];

    floyd();

    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
            std::cout << graph[i][j] << ' ';
        std::cout << '\n';
    }
    return 0;
}