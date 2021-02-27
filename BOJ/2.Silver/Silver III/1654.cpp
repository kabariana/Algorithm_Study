// 이분 탐색 문제
#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int n, k;
    std::cin >> n >> k;

    std::vector<ll> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    std::sort(v.begin(), v.end());

    ll l = 0; ll h = LLONG_MAX;

    ll maxv = 0;
    while(l <= h)
    {
        ll m = (l + h)/2;
        int res = 0;

        for(int i = 0; i<n; i++)
            res += v[i]/m;

        if(res >= k)
        {
            l = m + 1;
            maxv = std::max(maxv, m);
        }
        else
        {
            h = m - 1;
        }
    }
    std::cout << maxv;
    return 0;
}