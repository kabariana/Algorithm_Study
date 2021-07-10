#include <bits/stdc++.h>

const int MAX_SIZE = 10;
bool chessBoard[MAX_SIZE][MAX_SIZE];
bool visited1[MAX_SIZE*2]; // r -> l
bool visited2[MAX_SIZE*2]; // l -> r
int bishop[2];
int size;

void DFS(int cnt, int x, int y, int wb)
{
    if(x >= size)
    {
        y++;
        if(x&1) x = 0;
        else x = 1;
    }
    if(y >= size)
    {
        if(cnt > bishop[wb])
            bishop[wb] = cnt;
        return;
    }
    if(chessBoard[y][x] && !visited1[x + y + 1] && !visited2[x - y + size])
    {
        visited1[x + y + 1] = true;
        visited2[x - y + size] = true;
        DFS(cnt + 1, x + 2, y, wb);
        visited1[x + y + 1] = false;
        visited2[x - y + size] = false;
    }
    DFS(cnt, x + 2, y, wb);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> size;
    for(int i = 0; i<size; i++)
        for(int j = 0; j<size; j++)
            std::cin >> chessBoard[i][j];

    DFS(0, 0, 0, 0); // black
    DFS(0, 1, 0, 1); // white

    std::cout << bishop[0] + bishop[1] <<'\n';
    return 0;
}