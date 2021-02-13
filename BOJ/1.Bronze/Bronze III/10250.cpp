#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int h, w, n;
        std::cin >> h >> w >> n;

        int x = n%h;
        int y = n/h;

        if(x > 0)
            y++;
        else
            x = h;
        std::cout << x*100 + y << '\n';
    }
    return 0;
}