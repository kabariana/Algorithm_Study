#include <bits/stdc++.h>

int mat[2200][2200];
int res[3];

bool chk(int r, int c, int num)
{
    int s = mat[r][c];
    for(int i = r; i<r + num; i++)
        for(int j = c; j< c + num; j++)
            if(s != mat[i][j])  
                return false;
    return true;
}

void divide(int r, int c, int num)
{
    if(chk(r, c, num))
        res[mat[r][c]]++;
    else
    {
        int newSize = num / 3;
        for(int i = 0; i<3; i++)
            for(int j = 0; j<3; j++)
                divide(r + newSize * i, c + newSize * j, newSize);
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            int num;
            std::cin >> num;
            num++;
            mat[i][j] = num;
        }
    }
    divide(0, 0, N);

    for(int i = 0; i<3; i++)
        std::cout << res[i] <<'\n';
    return 0;
}