#include <bits/stdc++.h>

int map[2<<7 + 1][2<<7 + 1];
int w, b;

void func(int x, int y, int N)
{
    int tmp = 0;
    for(int i = x; i < x + N; i++)
        for(int j = y; j < y + N; j++)
            if(map[i][j])
                tmp++;
    
    if(!tmp) 
        w++;
    else if(tmp == N*N)
        b++;
    else
    {
        func(x, y, N/2);
        func(x, y + N / 2, N/2);
        func(x + N / 2, y, N/2);
        func(x + N/2, y + N/2, N/2);
    }
    return;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            std::cin >> map[i][j];
    func(0, 0, n);

    std::cout << w << '\n' << b <<'\n';
    return 0;
}