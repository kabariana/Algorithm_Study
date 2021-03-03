#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int x, y, n, dx = 987654321, dy = 987654321;
    std::cin >> x >> y >> n;
    while(n--)
    {
        int a, b;
        std::cin >> a >> b;
        if(std::abs(a-x) + std::abs(b-y)<=std::abs(dx-x) + std::abs(dy-y))
        {
            dx = a;
            dy = b;
        }
    }
    std::cout << dx << ' ' << dy;
    return 0;
}