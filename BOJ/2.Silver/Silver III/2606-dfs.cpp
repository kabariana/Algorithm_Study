#include <iostream>
#define SIZE 101

int arr[SIZE][SIZE];
bool visited[SIZE];

int n, m, cnt;

void dfs(int v)
{
    visited[v] = true;
    for(int i = 1; i<=n; i++)
    {
        if(!visited[i] && arr[v][i] == 1)
        {
            cnt++;
            dfs(i);
        }
    }
}


int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int x, y;
    std::cin >> n;
    std::cin >> m;

    for(int i = 0; i<m; i++)
    {
        std::cin >> x >> y;
        arr[x][y] = arr[y][x] = 1;
    }

    dfs(1);
    std::cout << cnt;
    return 0;
}