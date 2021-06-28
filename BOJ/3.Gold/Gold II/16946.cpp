#include <bits/stdc++.h>
#define SIZE 1000

int map[SIZE][SIZE];
int group[SIZE][SIZE];
int cnt[SIZE * SIZE + 1];
bool visited[SIZE][SIZE];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
int N, M;

int dfs(int y, int x, int k)
{
    visited[y][x] = 1;
    group[y][x] = k;

    int res = 1;
    for(int i = 0; i<4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= N || nx >= M || map[ny][nx] || visited[ny][nx])
            continue;
        res += dfs(ny, nx, k);
    }
    return res;
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
        for(int j = 0; j < M; j++)
            map[i][j] = str[j] - '0';
    }

    int tmp =1 ;
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<M; j++)
        {
            if(!map[i][j] && !visited[i][j])
            {
                cnt[tmp] = dfs(i, j, tmp);
                tmp++;
            }
        }
    }
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(!map[i][j])
                continue;
            int v = 0;
            std::set<int> S;
            for(int k = 0; k<4; k++)
            {
                int ny = i + dy[k];
                int nx = j + dx[k];
                if(ny < 0 || nx < 0 || ny >= N || nx >= M || map[ny][nx])   
                    continue;
                S.insert(group[ny][nx]);
            }
            for(auto ch : S)
                v+=cnt[ch];
            map[i][j] = v + 1;
        }
    }

    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<M; j++)
            std::cout << map[i][j]%10;
        std::cout << "\n";
    }
}