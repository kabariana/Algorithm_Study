#include <bits/stdc++.h>

bool visited[51][51];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
int map[51][51];
int m, n, k;

void dfs(int x, int y)
{
    visited[x][y] = true;
    for(int i = 0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < n && ny >= 0 && ny < m)
        {
            if(map[nx][ny])
            {
                if(!visited[nx][ny])
                    dfs(nx, ny);
            }
        }
        else
            continue;
    }
}


int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC;
    std::cin >> TC;

    while(TC--)
    {
        std::cin >> m >> n >> k;
        int cnt = 0;
        for(int i = 0; i<k; i++)
        {
            int x, y;
            std::cin >> x >> y;
            map[y][x] = 1;
        }
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(map[i][j] == 1)
                {
                    if(!visited[i][j])
                    {
                        cnt++;
                        dfs(i, j);
                    }
                }
            }
        }
        std::cout << cnt <<'\n';
        memset(visited, false, sizeof(visited));
        memset(map, 0, sizeof(map));
    }
    return 0;
}