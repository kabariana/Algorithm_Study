#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    ll N, T, ans = 0;
    std::vector<ll> v;
    
    std::cin >> N >> T;

    for(int i = 0; i<N; i++)
    {
        ll w, p;
        std::cin >> w >> p;
        ans += w;
        v.push_back(p);
    }
    std::sort(v.begin(), v.end());

    for(int i = 0; i<N; i++)
        ans+=v[N-i-1]*(T-i-1);
    std::cout << ans;
    return 0;
}