#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int m, tmp = 0, minv = 0;
        std::cin >> m;
        while(m--)
        {
            int a, b;
            std::cin >> a >> b;
            tmp += a-b;
            minv = std::min(tmp, minv);
        }
        std::cout << std::max(-minv, 0) << '\n';
    }
    return 0;
}