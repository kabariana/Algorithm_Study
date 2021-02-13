#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int l, a, b;
    double c;
    std::cin >> l >> a >> b;
    c = std::sqrt(a*a + b*b);
    std::cout << (int)(a*l/c) << ' ' << (int)(b*l/c);
    return 0;
}