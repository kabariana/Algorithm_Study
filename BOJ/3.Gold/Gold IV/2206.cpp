#include <bits/stdc++.h>
#define MAX 1000

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int N, M;
int graph[MAX][MAX];
int visited[MAX][MAX][2];

int BFS()
{
    std::queue<std::pair<std::pair<int, int>, int>> q;
    q.push({{0, 0}, 1});
    visited[0][0][1] = 1;

    while(!q.empty())
    {
        int y = q.front().first.first;
        int x = q.front().first.second;
        int b = q.front().second;
        q.pop();

        if(y == N-1 && x == M-1)
            return visited[y][x][b];

        for(int i = 0; i<4; i++)
        {
            int nextY = y + dy[i];
            int nextX = x + dx[i];

            if(0 <= nextY && nextY < N && 0 <= nextX && nextX < M)
            {
                if(graph[nextY][nextX] == 1 && b)
                {
                    visited[nextY][nextX][b-1] = visited[y][x][b] + 1;
                    q.push({{nextY, nextX}, b-1});
                }
                else if(graph[nextY][nextX] == 0 && visited[nextY][nextX][b] == 0)
                {
                    visited[nextY][nextX][b] = visited[y][x][b] + 1;
                    q.push({{nextY, nextX}, b});
                }
            }
        }
    }
    return -1;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;
    
    for(int i = 0; i<N; i++)
    {
        std::string str;
        std::cin >> str;

        for(int j = 0; j<M; j++)    
            graph[i][j] = str[j] - '0';
    }
    std::cout << BFS() << '\n';
    return 0;   
}