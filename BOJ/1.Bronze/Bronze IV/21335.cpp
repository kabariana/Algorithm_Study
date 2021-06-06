#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    const double PI = std::acos(-1);
    long double n;
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(6) << std::sqrt(n/PI) * PI * 2;
    return 0;
}