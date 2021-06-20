#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int t;
    std::cin >> t;

    while(t--)
    {
        int k, x, y;
        std::cin >> k >> x >> y;

        std::cout << std::max(k, std::min(x, y) + 2) - std::max(x, y) <<'\n';
    }
    return 0;
}