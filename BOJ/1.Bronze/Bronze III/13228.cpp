#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;
    while(T--)
    {
        int a1, a2, a3, b1,b2,b3;
        std::cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        std::cout << a3 + b3 + std::abs(b1-a1) + std::abs(b2-a2) << '\n';
    }
    return 0;
}