#include <bits/stdc++.h>

using ll = long long;

const int MOD = 1e9 + 7;

ll map[8][8], res[8][8];

void matrixMultiply(ll Arr[][8], ll Brr[][8])
{
    ll tmp[8][8] = {0,};
    for(int i = 0; i<8; i++)
    {
        for(int j = 0; j<8; j++)
        {
            ll sum = 0;
            for(int k = 0; k <8; k++)
                sum = (sum + Arr[i][k] * Brr[k][j])%MOD;
            tmp[i][j] = sum;
        } 
    }
    for(int i = 0; i<8; i++)
        for(int j = 0; j<8; j++)
            Arr[i][j] = tmp[i][j];
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    map[0][1] = map[1][0] = 1;
    map[0][2] = map[2][0] = 1;
    map[1][3] = map[3][1] = 1;
    map[2][3] = map[3][2] = 1;
    map[2][4] = map[4][2] = 1;
    map[4][3] = map[3][4] = 1;
    map[3][5] = map[5][3] = 1;
    map[4][5] = map[5][4] = 1;
    map[4][6] = map[6][4] = 1;
    map[5][6] = map[6][5] = 1;
    map[6][7] = map[7][6] = 1;
    map[5][7] = map[7][5] = 1;

    ll D;
    std::cin >> D;

    for(int i = 0; i<8; i++) // 항등 행렬
        res[i][i] = 1;

    while(D > 0)
    {
        if(D & 1)
            matrixMultiply(res, map);
        matrixMultiply(map, map);
        D /= 2;
    }
    std::cout << res[7][7] <<'\n';
    return 0;
}