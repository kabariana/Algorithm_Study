// 그냥 공식이다. https://snowall.tistory.com/3421
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

double getDist(double x1, double y1, double x2, double y2)
{
    double dx = x1 - x2;
    double dy = y1 - y2;
    dx *= dx;
    dy *= dy;
    return std::sqrt(dx + dy);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    double x1, y1, r1, x2, y2, r2;
    std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    if(r1 < r2)
    {
        std::swap(x1, x2);
        std::swap(y1, y2);
        std::swap(r1, r2);
    }

    std::cout << std::fixed;
    std::cout.precision(3);

    double dist = getDist(x1, y1, x2, y2);

    if(dist >= r1 + r2)
        std::cout << 0.000 << '\n';
    else if(dist + r2 <= r1)
        std::cout << r2 * r2 * M_PI << '\n';
    else
    {
        double theta1 = std::acos((r1*r1 +dist*dist-r2*r2)/(2*r1*dist));
        double theta2 = std::acos((r2*r2 +dist*dist-r1*r1)/(2*r2*dist));

        double a1 = (r1*r1*2*theta1)/2-r1*r1*std::sin(2*theta1)/2;
        double a2 = (r2*r2*2*theta2)/2-r2*r2*std::sin(2*theta2)/2;

        std::cout << a1 + a2 << '\n';
    }
    return 0;
}