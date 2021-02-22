#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int w, n, p;
    std::cin >> w >> n >> p;

    int cnt = 0;
    for(int i = 0; i<p; i++)
    {
        int h;
        std::cin >> h;
        if(h >= w && h <= n)
            cnt++;
    }
    std::cout << cnt;
    return 0;
}