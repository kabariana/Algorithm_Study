#include <bits/stdc++.h>

constexpr int size = 10;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

char board[size * 2][size * 2];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int r, c;
    std::string str;
    std::cin >> r >> c;

    for(int i = 0; i<r; i++)
    {
        std::cin >> str;
        for(int j = 0; j < c; j++)
            board[i][j] = str[j];
    }
    int tmp = 0;
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            if(board[i][j] == '.')
            {
                int d = 0;
                for(int k = 0; k<4; k++)
                {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if(x < 0 || y < 0 || x >= r || y >= c || board[x][y] == 'X')
                        continue;
                    d++;
                }
                if(d == 1)
                    tmp = 1;
            }
        }
    }
    std::cout << tmp <<'\n';
    return 0;

}