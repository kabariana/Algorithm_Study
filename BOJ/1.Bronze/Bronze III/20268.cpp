#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    while(n--)
    {
        int n, m;
        std::cin >> n >> m;
        for(int i = 0; i<n + m; i++)
        {
            int tmp;
            std::cin >> tmp;
        }
        std::cout << (n & 2 && m & 2 ? 7 : 1) << '\n';
    }
}