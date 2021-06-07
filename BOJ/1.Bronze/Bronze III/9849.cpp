#include <bits/stdc++.h>

int board[10001][10001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    for(int i = 0; i<n; i++)
    {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        for(int i = a; i<b; i++)
            for(int j = c; j<d; j++)
                board[i][j]++;
    }

    std::cout << std::count(board[0], board[10001], n);
    return 0;
}