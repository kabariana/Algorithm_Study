#include <bits/stdc++.h>

char map[401][401];

void f(int c, int r, int d)
{
    if(d == 1)
    {
        map[c][r]= '*';
        return;
    }
    for(int i = 0; i<4*(d-1)+1; i++)
    {
        //제일 위와 아래
        if(i==0 || i == 4*(d-1))
        {
            for(int j = 0; j < 4*(d-1)+1; j++)
                map[c+i][r+j] = '*';
            continue;
        }
        map[c+i][r] = '*';
        map[c+i][r+4*(d-1)] = '*';
    }
    f(c+2, r+2, d-1);
}

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    f(0, 0, n);

    for(int i = 0; i<4*(n-1)+1; i++)
    {
        for(int j = 0; j<4*(n-1)+1; j++)
        {
            char c = map[i][j] == '*'?'*':' ';
            std::cout << c;
        }
        std::cout << '\n';
    }
    return 0;
}