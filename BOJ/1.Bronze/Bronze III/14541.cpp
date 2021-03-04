#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while (true)
    {
        int n;
        std::cin >> n;

        if (n == -1)
            break;

        std::vector<std::pair<int, int>> vpii(n);
        for (int i = 0; i < n; i++)
            std::cin >> vpii[i].first >> vpii[i].second;

        int sum = vpii[0].first*vpii[0].second;
        for (int i = 1; i < n; i++)
            sum += (vpii[i].first * std::abs(vpii[i].second - vpii[i - 1].second));
        std::cout << sum << " miles\n";
    }
    return 0;
}