#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while (T--)
    {
        int n;
        std::cin >> n;
        std::cout << "Pairs for " << n << ": ";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i + j == n && i < j)
                {
                    if (i == 1)
                        std::cout << i << ' ' << j;
                    else
                        std::cout << ", " << i << ' ' << j;
                }
            }
        }
        std::cout << '\n';
    }
    return 0;
}