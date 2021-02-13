#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int x,y,w,h;
    int dx, dy;
    std::cin >> x >> y >> w >> h;

    dx = std::min(x, std::abs(w-x));
    dy = std::min(y, std::abs(h-y));

    std::cout << std::min(dx, dy);
    return 0;
}