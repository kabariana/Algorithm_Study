#include <bits/stdc++.h>

void ccw(int x1, int x2, int x3, int y1, int y2, int y3)
{
    int res = x1 * y2 + x2 * y3 + x3 * y1;
    res += (-y1*x2 - y2*x3 - y3*x1);
    if(res > 0)
        std::cout << 1 << '\n';
    else if(res < 0)
        std::cout << -1 <<'\n';
    else 
        std::cout << 0 <<'\n';
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ccw(x1, x2, x3, y1, y2, y3);
    return 0;
}