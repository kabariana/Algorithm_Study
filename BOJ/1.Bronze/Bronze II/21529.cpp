#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int t, n, a, b, c;
    std::cin >> t >> n >> a >> b >> c;
    std::cout << (t&1?std::max(a+b+c-2*n, 0):std::min({a, b, c}));
    return 0;
}