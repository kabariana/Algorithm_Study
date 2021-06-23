#include <bits/stdc++.h>

long long N, B;
long long mat[5][5];
long long res[5][5];
long long tmp[5][5];

void MatMul(long long x[5][5], long long y[5][5])
{
    for(int i = 0; i <N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            tmp[i][j] = 0;
            for(int k = 0; k < N; k++)
                tmp[i][j] += (x[i][k] * y[k][j]);
            tmp[i][j]%=1000;
        }
    }

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            x[i][j] = tmp[i][j];
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> B;

    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
            std::cin>> mat[i][j];
        res[i][i] = 1;
    }

    while(B>0)
    {
        if(B%2 == 1)
        {
            MatMul(res, mat);
        }
        MatMul(mat, mat);
        B/=2;
    }
    for(int i= 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            std::cout << res[i][j] << ' ';
        std::cout << '\n';
    }
    return 0;
}