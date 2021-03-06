#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    int minx = 41, miny = 41, maxx = -1, maxy = -1;

    while(n--)
    {
        int x, y;
        std::cin >> x >> y;

        minx = std::min(minx, x);
        maxx = std::max(maxx, x);
        miny = std::min(miny, y);
        maxy = std::max(maxy, y);
    }
    std::cout << (maxx-minx + maxy-miny)*2;
    return 0;
}