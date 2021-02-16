#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int N, m, M, T, R;
    std::cin >> N >> m >> M >> T >> R;
    int x = m;
    int cnt = 0;
    for(int i = 0; i<N;)
    {
        cnt++;
        if(x + T <= M)
        {
            i++;
            x+=T;
        }
        else
        {
            x-=R;
            if(x < m)
                x = m;
        }
        if(x + T > M && x == m)
        {
            std::cout << "-1";
            return 0;
        }
    }
    std::cout << cnt;
    return 0;
}