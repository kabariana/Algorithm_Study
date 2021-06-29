#include <bits/stdc++.h>
#define SIZE 1000

const int INF = -1;

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};
int N, M, cnt = 1, ans;
char board[SIZE][SIZE];
int chk[SIZE][SIZE];

int dfs(int y, int x)
{
    if(chk[y][x] != INF)
        return chk[y][x];
    int res = chk[y][x];
    chk[y][x] = cnt;

    int direction;
    if(board[y][x] == 'U')
        direction = 0;
    else if(board[y][x] == 'R')
        direction = 1;
    else if(board[y][x] == 'D')
        direction = 2;
    else if(board[y][x] == 'L')
        direction = 3;
    
    int newX = x + dx[direction];
    int newY = y + dy[direction];
    res = dfs(newY, newX);
    chk[y][x] = res;
    return chk[y][x];
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            std::cin >> board[i][j];
            chk[i][j] = INF;
        }
    }

    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<M; j++)
        {
            if(chk[i][j] == INF)
            {
                dfs(i, j);
                cnt++;
            }
        }
    }

    std::set<int> S;
    for(int i = 0; i<N; i++)
        for(int j = 0; j<M; j++)
            S.insert(chk[i][j]);
    
    std::cout << S.size() <<'\n';
    return 0;
}