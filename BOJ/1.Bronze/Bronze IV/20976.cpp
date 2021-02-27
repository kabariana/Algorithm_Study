#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << a + b + c - std::max({a, b, c}) - std::min({a, b, c});
    return 0;
}