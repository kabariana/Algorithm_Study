#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    double a, b;
    std::cin >> a >> b;

    std::cout << (int)(std::abs(a/b-1)*2);
    return 0;
}