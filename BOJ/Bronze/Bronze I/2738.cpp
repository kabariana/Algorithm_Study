#include <bits/stdc++.h>

int a[101][101];
int b[101][101];

int main(int argc, char* argv[])
{
    int n, m;
    std::cin >> n >> m;

    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            std::cin >> a[i][j];

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            std::cin >> b[i][j];
            a[i][j] += b[i][j];
        }
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
            std::cout << a[i][j] << ' ';
        std::cout << '\n';
    }
    return 0;
}