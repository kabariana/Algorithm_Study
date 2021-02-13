#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    for (int i = 1; i <= T; i++)
    {
        std::cout << "Case " << i << ":\n";
        int num;
        std::cin >> num;
        for (int j = 1; j <= 6; j++)
        {
            for (int k = 1; k <= 6; k++)
            {
                if (j + k == num && j<=k)
                {
                        std::cout << '(' << j << ',' << k << ")\n";
                }
            }
        }
    }
    return 0;
}