#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    std::cin >> x3 >> y3;

    x4 = x1;
    y4 = y1;

    if(x4 == x2)
        x4 = x3;
    else if(x4 == x3)
        x4 = x2;

    if(y4 == y2)
        y4 = y3;
    else if(y4 == y3)
        y4 = y2;
    
    std::cout << x4 << ' ' << y4;
    return 0;
}