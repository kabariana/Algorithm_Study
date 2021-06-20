// 또 BFS
#include <bits/stdc++.h>
#define MAX 100

int M, N, H;
int dx[] = {-1, 1, 0, 0, 0, 0};
int dy[] = {0, 0, -1, 1, 0, 0};
int dz[] = {0, 0, 0, 0, -1, 1};

int map[MAX][MAX][MAX];
bool visited[MAX][MAX][MAX];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::queue<std::pair<std::pair<int, int>, int>> q;

    std::cin >> M >> N >> H;

    for(int k = 0; k < H; k++)
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j<M; j++)
            {
                std::cin >> map[i][j][k];
                if(map[i][j][k] == 1)
                {
                    q.push({{i, j}, k});
                    visited[i][j][k] = true;
                }
                else if(map[i][j][k] == -1)
                    visited[i][j][k] = true;
            }
        }
    }

    int res = -1;

    while(!q.empty())
    {
        int size = q.size();
        ++res;
        while(size--)
        {
            std::pair<std::pair<int, int>, int> curr = q.front();
            q.pop();

            for(int i = 0; i < 6; i++)
            {
                int newX = curr.first.second + dx[i];
                int newY = curr.first.first + dy[i];
                int newZ = curr.second + dz[i];

                if(newX < 0 || newX >= M || newY < 0 || newY >= N || newZ < 0 || newZ >= H)
                    continue;
                if(!visited[newY][newX][newZ] && map[newY][newX][newZ] == 0)
                {
                    visited[newY][newX][newZ] = true;
                    q.push({{newY, newX}, newZ});
                }
            }
        }
    }

    for(int k = 0; k < H; k++)
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j<M; j++)
            {
                if(!visited[i][j][k])
                {
                    std::cout << "-1\n";
                    return 0;
                }
            }
        }
    }
    std::cout << res <<'\n';
    return 0;
}