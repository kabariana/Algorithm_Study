#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int x, y, x1, y1, x2, y2, dx = 0, dy = 0;
    std::cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    if(x < x1)
        dx = x1 - x;
    if(x2 < x)
        dx = x - x2;
    if(y < y1)
        dy = y1 - y;
    if(y2 < y)
        dy = y - y2;
    printf("%.3lf", std::sqrt(dx*dx + dy*dy));
    return 0;
}