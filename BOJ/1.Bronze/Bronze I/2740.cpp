#include <bits/stdc++.h>

int A[101][101];
int B[101][101];
int C[101][101];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m, k;
    std::cin >> n >> m;

    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            std::cin >> A[i][j];

    std::cin >> m >> k;
    for(int i = 0; i<m; i++)
        for(int j = 0; j<k; j++)
            std::cin>> B[i][j];

    for(int i = 0; i<n; i++)
        for(int j = 0; j<k; j++)
            for(int l=0; l<m; l++)
                C[i][j] += A[i][l] * B[l][j];

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<k; j++)
            std::cout << C[i][j] << ' ';
        std::cout << '\n';
    }
    return 0;
}