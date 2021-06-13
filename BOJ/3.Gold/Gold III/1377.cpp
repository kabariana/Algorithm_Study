#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> vp(n);

    for(int i = 0; i<n; i++)
    {
        std::cin >> vp[i].first;
        vp[i].second = i;
    }

    std::sort(vp.begin(), vp.end());

    int res = 0;
    for(int i = 0; i < n; i++)
        res = std::max(res, vp[i].second - i);

    std::cout << res + 1 << '\n';
    return 0;
}