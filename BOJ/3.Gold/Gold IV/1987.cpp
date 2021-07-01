#include<bits/stdc++.h>
#define SIZE 20

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

char board[SIZE][SIZE];
bool visited[SIZE][SIZE];
bool alphabet[26];
int R, C;

int dfs(int y, int x, int cnt)
{
    // 종료 조건
    int index = board[y][x] - 'A';
    if(visited[y][x] || alphabet[index])
        return cnt;

    visited[y][x] = true;
    alphabet[index] = true;
    cnt++;
    int tmp = cnt;

    for(int i = 0; i<4; i++)
    {
        int newY = y + dy[i];
        int newX = x + dx[i];

        if(newY >= 0 && newY < R && newX >= 0 && newX < C)
        {
            if(!visited[newY][newX])
            {
                int newIndex = board[newY][newX] - 'A';
                if(!alphabet[newIndex])
                    tmp = std::max(tmp, dfs(newY, newX, cnt));
            }
        }
    }
    visited[y][x] = false;
    alphabet[index] = false;
    return tmp;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> R >> C;
    for(int i = 0; i<R; i++)
    {
        std::string str;
        std::cin >> str;
        for(int j = 0; j<C; j++)
            board[i][j] = str[j];
    }

    std::cout << dfs(0, 0, 0) <<'\n';
    return 0;
}