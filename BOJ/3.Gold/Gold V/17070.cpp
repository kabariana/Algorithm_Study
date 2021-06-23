#include <bits/stdc++.h>

int N;
std::vector<std::vector<int>> mat;
int cnt;

void dfs(int x, int y, int direction)
{
    if (x >= 0 && y >= 0 && x < N && y < N)
    {
        if (direction == 2)
        {
            if (mat[x][y] == 1 || mat[x - 1][y] == 1 || mat[x][y - 1] == 1)
                return;
        }
        else if (direction == 1 || direction == 0)
        {
            if (mat[x][y] == 1)
                return;
        }
        if (x == N - 1 && y == N - 1)
        {
            cnt++;
            return;
        }

        if (direction == 0)
        {
            dfs(x, y + 1, 0);
            dfs(x + 1, y + 1, 2);
        }
        else if (direction == 1)
        {
            dfs(x + 1, y, 1);
            dfs(x + 1, y + 1, 2);
        }
        else
        {
            dfs(x, y + 1, 0);
            dfs(x + 1, y, 1);
            dfs(x + 1, y + 1, 2);
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;
    mat = std::vector<std::vector<int>>(N, std::vector<int>(N, 0));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int num;
            std::cin >> num;
            if (num == 1)
                mat[i][j] = num;
        }
    }

    if (mat[0][0] != 1 && mat[N - 1][N - 1] != 1)
        dfs(0, 1, 0);
    std::cout << cnt << '\n';
    return 0;
}