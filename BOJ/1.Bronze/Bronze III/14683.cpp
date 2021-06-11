#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b, c, d, t;
    std::cin >> a >> b >> c >> d >> t;

    std::cout << (t>=std::abs(a-c) + std::abs(b-d)&&(t-std::abs(a-c) - std::abs(b-d))%2 == 0? "Y\n":"N\n");
    return 0;
}