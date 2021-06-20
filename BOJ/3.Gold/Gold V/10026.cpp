#include <bits/stdc++.h>
#define MAX 100

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

char MAP[MAX][MAX];
bool visited[MAX][MAX];
int N;

void BFS(int a, int b)
{
    std::queue<std::pair<int, int>> q;
    q.push({a, b});
    visited[a][b] = true;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i<4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && ny >= 0 && nx < N && ny < N)
            {
                if(visited[nx][ny] == false)
                {
                    if(MAP[nx][ny] == MAP[x][y])
                    {
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;

    for(int i = 0; i<N; i++)
        for(int j = 0; j<N; j++)
            std::cin >> MAP[i][j];
    
    int res1, res2;
    res1 = res2 = 0;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(visited[i][j] == false)
            {
                BFS(i, j);
                res1++;
            }
        }
    }

    memset(visited, false, sizeof(visited));

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(MAP[i][j] == 'G')
                MAP[i][j] = 'R';
        }
    }

    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            if(visited[i][j] == false)
            {
                BFS(i, j);
                res2++;
            }
        }
    }
    std::cout << res1 << ' ' <<res2 << '\n';
    return 0;
}