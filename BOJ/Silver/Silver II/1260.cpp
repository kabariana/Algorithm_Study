// DFS, BFS 둘 다 구현
#include <iostream>
#include <queue>
#define SIZE 1001

int arr[SIZE][SIZE];
bool visited[SIZE];
int n, m, v;

void dfs(int v)
{
    std::cout << v << ' ';
    visited[v] = true;
    for(int i = 1; i<=n; i++)
    {
        if(visited[i] == true || arr[v][i] == 0)
            continue;
        dfs(i);
    }
}

void bfs(int v)
{
    std::queue<int> q;
    q.push(v);
    visited[v] = false;

    while(!q.empty())
    {
        v = q.front();
        std::cout << q.front() << ' ';
        q.pop();
        for(int i = 1; i<=n; i++)
        {
            if(visited[i]== false || arr[v][i] == 0)
                continue;
            q.push(i);
            visited[i] = 0;
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int x, y;
    std::cin >> n >> m >> v;

    for(int i = 0; i<m; i++)
    {
        std::cin >> x >> y;
        arr[x][y] = arr[y][x] = 1;
    }

    dfs(v);
    std::cout << '\n';
    bfs(v);
    return 0;
}