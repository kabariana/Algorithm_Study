#include <bits/stdc++.h>
#define MAX 1001

int N;
int graph[MAX][MAX];
int degree[MAX];

void DFS(int n)
{
    for(int i = 1; i<= N; i++)
    {
        while(graph[n][i])
        {
            graph[n][i]--;
            graph[i][n]--;
            DFS(i);
        }
    }
    std::cout << n << ' ';
}


int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            std::cin >> graph[i][j];

            degree[i] += graph[i][j];
            degree[j] += graph[i][j];
        }
    }

    bool isEuler = true;

    for(int i = 1; i <= N; i++)
    {
        degree[i] /= 2;

        if(degree[i] % 2)
        {
            isEuler = false;
            break;
        }
    }

    if(isEuler)
    {
        DFS(1);
        std::cout << '\n';
    }
    else
        std::cout << -1 << '\n';
    return 0;
}