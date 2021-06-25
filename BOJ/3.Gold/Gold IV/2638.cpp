#include <bits/stdc++.h>
#define MAX 101

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int map[MAX][MAX];
int visited[MAX][MAX];
int N, M;

bool BFS()
{
    bool flag = false;
    memset(visited, 0, sizeof(visited));

    std::queue<std::pair<int, int>> q;
    q.push({ 0, 0 });
    visited[0][0] = -1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nX = x + dx[i];
            int nY = y + dy[i];

            if (nX < 0 || nY < 0 || nX >= N || nY >= M)
                continue;

            if (map[nX][nY] == 1)
            {
                visited[nX][nY]++;
                continue;
            }

            if (visited[nX][nY] != 0)
                continue;

            q.push({ nX, nY });
            visited[nX][nY] = -1;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (visited[i][j] >= 2)
            {
                map[i][j] = 0;
                flag = true;
            }
        }
    }
    return flag;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            std::cin >> map[i][j];

    int cnt = 0;
    while (true)
    {
        if (BFS() == false)
            break;
        cnt++;
    }

    std::cout << cnt << '\n';
    return 0;
}