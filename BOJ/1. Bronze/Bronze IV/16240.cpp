#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m, k;
    std::cin >> n >> m >> k;

    std::cout << std::min(m, k) - std::max(m, k) + n;
    return 0;
}