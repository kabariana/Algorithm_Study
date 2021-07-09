#include <bits/stdc++.h>

struct Point {
    double x, y;
};

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    Point a;
    std::cin >> a.x >> a.y;
    double area = 250 * 250 / 2;

    std::cout << std::fixed << std::setprecision(2);
    if(a.x == 0)
    {
        if(a.y < 125)
            std::cout << area / (250 - a.y) << ' ' << 250 - area/(250-a.y) << '\n';
        else
            std::cout << area / a.y << ' ' << 0. << '\n';
    }
    else if(a.y == 0)
    {
        if(a.x < 125)
            std::cout << 250 - area / (250 - a.x) << ' ' << area / (250 - a.x) << '\n';
        else
            std::cout << 0. << ' ' << area / a.x << '\n';
    }
    else
    {
        if(a.x > 125)
            std::cout << 0. << ' ' <<250 - area/a.x << '\n';
        else
            std::cout << 250 - area/a.y << ' ' << 0. << '\n';   
    }
    return 0;
}