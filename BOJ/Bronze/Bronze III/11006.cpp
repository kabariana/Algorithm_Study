#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T, n, m, u, t;
    std::cin >> T;

    while(T--)
    {
        std::cin >> n >> m;
        u = 2*m - n;
        t = m - u;
        std::cout << u << ' ' << t << '\n';
    }
    return 0;
}