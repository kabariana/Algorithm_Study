#include <bits/stdc++.h>

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int R, C, T, cnt;
int map[50][50];
int visited[50][50], copy[50][50];
std::vector<int> puri;

void copyArray(int (*a)[50], int (*b)[50])
{
    for(int i = 0; i<R; i++)
        for(int j = 0; j<C; j++)
            a[i][j] = b[i][j];
}

void spe(int x, int y)
{
    int loc = map[x][y]/5, tmp = 0;
    if(loc>0)
    {
        for(int i = 0; i<4; i++)
        {
            int newX = x + dx[i];
            int newY = y + dy[i];
            if(newX >= 0 && newX < R && newY >= 0 && newY < C && map[newX][newY] != -1)
            {
                visited[newX][newY] += loc;
                tmp++;
            }
        }
        visited[x][y] += map[x][y] - loc * tmp;
    }
    else if(loc == 0)
        visited[x][y] += map[x][y];
}

void process()
{
    visited[puri[0]][0] = -1, visited[puri[1]][0] = -1;
    for(int i = 0; i <R; i++)
    {
        for(int j = 0; j<C; j++)
            if(map[i][j] > 0)   
                spe(i, j);
    }
    copyArray(map, visited);
}

void run()
{
    for(int i = puri[0]-1; i-1>=0; i--)
        map[i][0] = map[i-1][0];
    for(int i = 0; i+1 <C; i++)
        map[0][i] = map[0][i+1];
    for(int i = 0; i+1 <= puri[0]; i++)
        map[i][C-1] = map[i+1][C-1];
    for(int i = C-1; i-1>0; i--)
        map[puri[0]][i] = map[puri[0]][i-1];
    map[puri[0]][1] = 0;

    for(int i = puri[1] + 1; i + 1 < R; i++)
        map[i][0] = map[i+1][0];
    for(int i = 0; i+1 <C; i++)
        map[R-1][i] = map[R-1][i+1];
    for(int i = R-1; i-1 >= puri[1]; i--)
        map[i][C-1] = map[i-1][C-1];
    for(int i = C-1; i-1>0; i--)
        map[puri[1]][i] = map[puri[1]][i-1];
    map[puri[1]][1] = 0;
}


int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> R >> C >> T;
    for(int i = 0; i<R; i++)
    {
        for(int j = 0; j<C; j++)
        {
            std::cin >> map[i][j];
            if(map[i][j] == -1)
                puri.push_back(i);
        }
    }

    while(T--)
    {
        copyArray(visited, copy);
        process();
        run();
    }
    for(int i = 0; i<R; i++)
        for(int j = 0; j<C; j++)
            if(map[i][j] != -1)
                cnt += map[i][j];
    std::cout << cnt <<'\n';
    return 0;
}