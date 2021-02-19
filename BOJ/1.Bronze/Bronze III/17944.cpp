#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int N, T;
    std::cin >> N >> T;

    int cnt = 0;
    int delta = 1;
    for(int i = 0; i<T; i++)
    {
        cnt+=delta;
        if(cnt == 1)
            delta = 1;
        if(cnt == 2*N)
            delta = -1;
    }
    std::cout << cnt
}