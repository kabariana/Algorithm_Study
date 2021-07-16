#include <bits/stdc++.h>
using ll = long long;

ll func(ll n, ll m, ll h, ll w)
{
    int ret = 0;
    while(h < n)
    {
        ret++;
        h *= 2;
    }
    while(w < m)
    {
        ret++;
        w *= 2;
    }
    return ret;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    ll n, m, h, w;
    std::cin >> n >> m >> h >> w;
    std::cout << std::min(func(n, m, h, w), func(m, n, h, w)) << '\n';
    return 0;
}