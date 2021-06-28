// 비트마스킹
#include <bits/stdc++.h>
#define SIZE 11

int dx[] = {0, -1, 0, 1};
int dy[] = {1, 0, -1, 0};

bool map[SIZE][SIZE], copy[SIZE][SIZE];
int res = 1e9;

void copyMap()
{
    for(int i = 0; i<10; i++)
        for(int j = 0; j<10; j++)
            copy[i][j] = map[i][j];
}

bool chk(int x, int y)
{
    if(x < 0 || x >= 10 || y < 0 || y >= 10)
        return 1;
    return 0;
}

void switchOn(int x, int y)
{
    for(int i = 0; i<4; i++)
    {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if(!chk(newX, newY))    
            copy[newX][newY] = !copy[newX][newY];
    }
    copy[x][y] = !copy[x][y];
}

bool chk2()
{
    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j<10; j++)
            if(copy[i][j])
                return 1;
    }
    return 0;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j<10; j++)
        {
            char ch;
            std::cin >> ch;
            if(ch == 'O')
                map[i][j] = true;
        }
    }

    for(int k = 0; k < (1<<10); k++)
    {
        int cnt = 0;
        copyMap();

        for(int t = 0; t < 10; t++)
        {
            if(k & (1 << t))
            {
                cnt++;
                switchOn(0, t);
            }
        }

        for(int t = 1; t < 10; t++)
        {
            for(int c = 0; c < 10; c++)
            {
                if(copy[t-1][c])
                {
                    switchOn(t, c);
                    cnt++;
                }
            }
        }
        if(!chk2())
            res = std::min(res, cnt);
    }
    if(res == 1e9)
        std::cout << -1 <<'\n';
    else
        std::cout << res <<'\n';
    return 0;
}