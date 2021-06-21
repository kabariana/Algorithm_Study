#include <bits/stdc++.h>
#define MOD 1000000007

typedef long long ll;

ll N, S;

ll func(ll x, ll k)
{
    if(k == 1) return x;
    if(k & 1) 
        return x * func(x, k-1) % MOD;
    ll res = func(x, k/2);
    return res * res % MOD;
}

ll getGCD(ll a, ll b)
{
    if(b == 0)
        return a;
    return getGCD(b, a%b);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    ll result = 0;
    int M;
    std::cin >> M;

    while(M--)
    {
        std::cin >> N >> S;
        ll gcd = getGCD(N, S);
        N /= gcd;
        S /= gcd;
        ll tmp = func(N, MOD - 2);
        result += S * tmp % MOD;
        result %= MOD;
    }
    std::cout << result<<'\n';
    return 0;
}