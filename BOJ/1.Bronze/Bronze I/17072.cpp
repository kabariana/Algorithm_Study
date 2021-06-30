#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            int r, g, b;
            std::cin >> r >> g >> b;

            static constexpr char map[] = {'#', 'o', '+', '-', '.'};
            std::cout << map[std::min((2126 * r + 7152 * g + 722 * b)/510000, 4)];
        }
        std::cout << '\n';
    }
    return 0;
}