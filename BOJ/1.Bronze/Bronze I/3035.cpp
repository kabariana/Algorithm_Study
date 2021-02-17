#include <bits/stdc++.h>

char A[51][51];

int main(int argc, char* argv[])
{
    int r, c, zr, zc;
    std::cin >> r >> c >> zr >> zc;

    for(int i = 0; i<r; i++)
        std::cin >> A[i];

    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<zr; j++)
        {
            for(int k = 0; k < c; k++)
            {
                for(int l = 0; l < zc; l++)
                {
                    std::cout << A[i][k];
                }
            }
            std::cout << '\n';
        }
    }
    return 0;
}