#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    double a, b;
    std::cin >> a >> b;
    double x = -a+std::sqrt(a*a-b);
    double y = -a-std::sqrt(a*a-b);

    // 중근
    if(x == y)
        std::cout << x;
    else
        std::cout << y << ' ' << x;
    return 0;
}