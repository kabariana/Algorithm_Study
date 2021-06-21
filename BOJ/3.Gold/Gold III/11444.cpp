#include <bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
typedef std::vector<std::vector<ll>> ary;

ll n;

ary operator* (ary& a, ary& b)
{
    ary tmp(2, std::vector<ll>(2));

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            for(int k = 0; k < 2; k++)
            {
                tmp[i][j] += a[i][k] * b[k][j];
            }
            tmp[i][j] %= MOD;
        }
    }
    return tmp;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> n;

    ary res = {{1, 0}, {0, 1}};
    ary base = {{1, 1}, {1, 0}};

    while(n > 0)
    {
        if(n % 2 == 1)
            res = res * base;
        base = base * base;
        n/=2;
    }

    std::cout << res[0][1] <<'\n';
    return 0;
}