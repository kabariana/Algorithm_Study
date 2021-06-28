#include <bits/stdc++.h>

typedef long long ll;

ll func(ll n)
{
    ll cnt = 0;
    ll mask = 1LL << 62;
    for(int i = 62; i >= 0; i--, mask >>= 1)
    {
        if((n & mask) == 0)
            continue;
        cnt += 1 + i * (1LL<<(i-1));
        n -= mask;
        cnt += n;
    }
    return cnt;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    ll a, b;
    std::cin >> a >> b;

    std::cout << func(b) - func(a-1) << '\n';
    return 0;
}