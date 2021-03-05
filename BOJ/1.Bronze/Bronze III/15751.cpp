#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, x, y;
    std::cin >> a >> b >> x >> y;

    std::cout << std::min(std::abs(a-b), std::min(std::abs(a-x)+std::abs(b-y), std::abs(a-y)+std::abs(b-x)));
    return 0;
}