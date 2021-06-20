#include <bits/stdc++.h>
#define MAX 500

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int N, M, res;
int map[MAX][MAX];
bool visited[MAX][MAX];

void DFS(int x, int y, int acc, int cnt)
{
    visited[x][y] = true;

    if(cnt == 3)
    {
        res = (res>acc?res:acc);
        return;
    }

    for(int i = 0; i<4; i++)
    {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if(newX < 0 || newY < 0 || newX >= N || newY >= M)
            continue;
        if(visited[newX][newY]) 
            continue;

        DFS(newX, newY, acc + map[newX][newY], cnt+1);
        visited[newX][newY] = false; 
    }
}
// ㅗ 모양 4가지
void s1(int x, int y)
{
    int tmp = 0;
    tmp = map[x][y] + map[x][y+1] + map[x][y+2] + map[x-1][y+1];
    if(tmp > res)
        res = tmp;
}

void s2(int x, int y)
{
    int tmp = 0;
    tmp = map[x][y] + map[x][y+1] + map[x][y+2] + map[x+1][y+1];
    if(tmp > res)
        res = tmp;
}

void s3(int x, int y)
{
    int tmp = 0;
    tmp = map[x][y] + map[x+1][y] + map[x+2][y] + map[x+1][y+1];
    if(tmp > res)
        res = tmp;
}

void s4(int x, int y)
{
    int tmp = 0;
    tmp = map[x][y] + map[x-1][y+1] + map[x][y+1] + map[x+1][y+1];
    if(tmp > res)
        res = tmp;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            std::cin >> map[i][j];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            memset(visited, false, sizeof(visited));
            DFS(i, j, map[i][j], 0);
            if(i - 1 >= 0 && j + 2 < M)
                s1(i, j);
            if(j + 2 < M && i + 1 < N)
                s2(i, j);
            if(i + 2 < N && j + 1 < M)
                s3(i, j);
            if(i + 1 < N && i - 1 >= 0 && j + 1 < M)
                s4(i, j);
        }
    }

    std::cout << res <<'\n';
    return 0;
}