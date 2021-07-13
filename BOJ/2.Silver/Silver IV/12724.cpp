#include <bits/stdc++.h>
using ll = long long;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    for(int i = 1; i<=T; i++)
    {
        int n;
        std::cin >> n;
        std::vector<ll> v1(n), v2(n);

        for(int j = 0; j<n; j++)
            std::cin >> v1[j];
        for(int j = 0; j<n; j++)
            std::cin >> v2[j];

        ll res = 0;
        std::sort(v1.begin(), v1.end());
        std::sort(v2.rbegin(), v2.rend());

        res = std::inner_product(v1.begin(), v1.end(), v2.begin(), 0LL);

        std::cout << "Case #" << i << ": " << res << '\n';
    }
    return 0;
}