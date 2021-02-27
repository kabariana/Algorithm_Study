// 이분탐색 문제
#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<ll> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());

    ll m;
    std::cin >> m;

    ll l = 1, h = v.back();
    ll res;
    while(l<=h)
    {
        ll mid = (l+h)/2;
        ll sum = 0;
        for(int i = 0; i<n; i++)
            sum+=std::min(mid, v[i]);

        if(sum <= m)
        {
            res = mid;
            l = mid + 1;
        }
        else
            h = mid - 1;
    } 
    std::cout << res;
    return 0;
}