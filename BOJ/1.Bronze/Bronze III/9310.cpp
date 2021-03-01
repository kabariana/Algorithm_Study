#include <bits/stdc++.h>
typedef long long ll;

ll func(ll a, ll b)
{
    ll res = 1;
    while(b)
    {
        if(b&1)
            res*=a;
        a*=a;
        b/=2;
    }
    return res;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        int n;
        std::cin >> n;
        if(!n)
            break;
        int a, b, c, d;
        std::cin >> a >> b >> c;
        d = b - a;
        if(c-b==d)
            std::cout << (n*(2*a+(n-1)*d))/2 << '\n';
        else
        {
            int r = b/a;
            std::cout << a*(func(r, n)-1)/(r-1)<< '\n';
        }
    }
    return 0;
}