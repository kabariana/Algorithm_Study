#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    ll a, b, c, x, y;
    std::cin >> a >> b >> c >> x >> y;

    if(a + b < 2 * c)
        std::cout << a*x + b*y;
    else
    {
        ll tmp = std::min(x, y);
        std::cout << c*tmp*2 + std::min(2*c, a)* std::max((ll)0, x-tmp)+std::min(c*2, b)*std::max((ll)0, y-tmp);
    }
    return 0;
}