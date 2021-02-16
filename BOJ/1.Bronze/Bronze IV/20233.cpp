#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, x, b, y, T;
    int r1, r2;

    std::cin >> a >> x >> b >> y >> T;

    r1 = a + 21*std::max(T-30, 0)*x;
    r2 = b + 21*std::max(T-45, 0)*y;

    std::cout << r1 << ' ' << r2;
    return 0;
}