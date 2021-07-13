#include <bits/stdc++.h>
using ll = long long;
using pll = std::pair<ll, ll>;

const int MAX_SIZE = 1e5 + 1;
pll arr[MAX_SIZE];

bool cmp(pll a, pll b)
{
    if(a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}

ll square(ll n)
{
    return n * n;
}

ll distance(pll a, pll b)
{
    return square(a.first - b.first) + square(a.second - b.second);
}

ll func(ll s, ll e)
{
    if(e - s == 1)
        return LLONG_MAX;
    ll m = (s + e) / 2;
    ll val = std::min(func(s, m), func(m, e));

    std::vector<pll> v;

    for(int i = s; i<e; i++) 
        if(square(arr[i].first - arr[m].first) <= val) 
            v.push_back(arr[i]);
    std::sort(v.begin(), v.end(), cmp);
    
    
    for(int i = 0; i<v.size(); i++) 
        for(int j = i + 1; j < v.size() && j < i + 7; j++) 
            val = std::min(val, distance(v[i], v[j]));
    return val;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    ll n;
    std::cin >> n;
    
    for(ll i = 0; i<n; i++)
        std::cin >> arr[i].first >> arr[i].second;

    std::sort(arr, arr + n);

    std::cout << func(0LL, n) <<'\n';
    return 0;
}