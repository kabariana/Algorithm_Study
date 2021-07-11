// euler pi function
#include <bits/stdc++.h>
using ll = long long;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    ll n;
    std::cin >> n;

    ll res = n;
    for(ll i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            res -= res/i;
            while(n%i == 0)
                n/=i;
        }
    }
    if(n > 1)
        res -= res / n;
    std::cout << res <<'\n';
    return 0;
}