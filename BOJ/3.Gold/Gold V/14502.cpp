#include <bits/stdc++.h>

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int n, m, map[10][10], visited[10][10];
std::vector<std::pair<int, int>> v;

bool chk(int x, int y)
{
    return (0 <= x && x < n && 0 <= y && y < m);
}

void dfs(int i, int j)
{
    for(int k = 0; k < 4; k++)
    {
        int newX = i + dx[k];
        int newY = j + dy[k];
        if(chk(newX, newY) && !visited[newX][newY])
        {
            visited[newX][newY] = 2;
            dfs(newX, newY);
        }
    }
}

void wall(std::pair<int, int>& x)
{
    visited[x.first][x.second] = 1;
}

int solve(std::pair<int, int>& x, std::pair<int, int>& y, std::pair<int, int>& z)
{
    int res = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            visited[i][j] = map[i][j];

    
    wall(x), wall(y), wall(z);
    
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            if(visited[i][j] == 2)
                dfs(i, j);
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j<m; j++)
            if(!visited[i][j]) // 0 일 때
                res++; // 개수
    return res;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int res = 0;
    std::cin >> n >> m;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            std::cin >> map[i][j];
            if(map[i][j] == 0)
                v.push_back({i, j});
        }
    }

    int size = v.size();

    for(int i = 0; i < size-2; i++)
    {
        for(int j  = i + 1; j < size - 1; j++)
        {
            for(int k = j + 1; k < size; k++)
            {
                std::pair<int, int> tmp = v[i], tmp2 = v[j], tmp3 = v[k];
                int current = solve(tmp, tmp2, tmp3);
                res = std::max(current, res);
            }
        }
    }

    std::cout << res <<'\n';
    return 0;
}