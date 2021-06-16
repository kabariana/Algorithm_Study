#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<ll> cap(n);
    std::vector<ll> left(n);
    std::vector<ll> right(n);

    for(int i = 0; i<n; i++)
        std::cin >> left[i] >> right[i] >> cap[i];
    
    for(int i = 1; i<n; i++)
        left[i] = std::min(left[i-1] + cap[i-1], left[i]);
    
    for(int i = n-2; i>= 0; i--)
        right[i] = std::min(right[i], right[i+1] + cap[i+1]);

    ll res = 0;
    for(int i = 0; i<n; i++)
        res = std::max(res, cap[i] + left[i] + right[i]);

    std::cout << res << '\n';
    return 0;
}