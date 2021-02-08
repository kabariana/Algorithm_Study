#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b;
    std::cin >> a >> b;
    a--;
    b--;
    std::cout << std::abs(a/4 - b/4) + std::abs(a%4 - b%4);
    return 0;
}