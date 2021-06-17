#include <bits/stdc++.h>

typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> v;
    for(int i = 0; i<n; i++)
    {
        int tmp;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::sort(v.begin(), v.end());

    ll res = 0;

    for(int i = 1; i<=n; i++)
        res += std::abs(i-v[i-1]);

    std::cout << res << '\n';
}