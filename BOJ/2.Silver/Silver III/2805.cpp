#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    ll n, m;
    std::cin >> n >> m;

    std::vector<ll> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    std::sort(v.begin(), v.end());

    ll l = 0, h = LLONG_MAX;
    ll maxv = 0;
    
    while(l<=h)
    {
        ll mid = (l+h)/2;
        ll res = 0;

        for(int i = 0; i<n; i++)
            if(mid < v[i])
                res += v[i]-mid;

        if(res >= m)
        {
            l = mid + 1;
            maxv = std::max(maxv, mid);
        }
        else
            h = mid - 1;
    }
    std::cout << maxv;
    return 0;
}