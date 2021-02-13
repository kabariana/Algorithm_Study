#include <bits/stdc++.h>

char map[3073][3073];
char preset[3][6] = { "  *  ", " * * ", "*****" };

void f(int n, int c, int r)
{
    if(n==1)
    {
        for(int i = 0; i<3; i++)
            for(int j = 0; j<5; j++)
                map[c+i][r+j] = preset[i][j];
        return;
    }
    f(n/2, c, r+3*n/2);
    f(n/2, c+3*n/2, r);
    f(n/2, c+3*n/2, r+3*n);
    return;
}

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    f(n/3, 0, 0);

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n*2; j++)
        {
            char c = (map[i][j] =='*'?'*':' ');
            std::cout << c;
        }
        std::cout << '\n';
    }
    return 0;
}