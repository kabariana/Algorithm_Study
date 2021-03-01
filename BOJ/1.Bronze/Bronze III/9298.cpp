#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    for(int i = 1; i<=T; i++)
    {
        int n;
        double x, y, xMax, xMin, yMax, yMin;
        double area, peri;
        std::cin >> n >> x >> y;
        xMin = xMax = x;
        yMin = yMax = y;
        for(int i = 1; i<n; i++)
        {
            std::cin >> x >> y;
            xMax = std::max(x, xMax);
            xMin = std::min(x, xMin);
            yMax = std::max(y, yMax);
            yMin = std::min(y, yMin);
        }
        area = std::abs(xMax - xMin) * std::abs(yMax - yMin);
        peri = 2*(std::abs(xMax-xMin)+std::abs(yMax-yMin));
        printf("Case %d: Area %.10lf, Perimeter %.10lf\n", i, area, peri);
    }
    return 0;
}