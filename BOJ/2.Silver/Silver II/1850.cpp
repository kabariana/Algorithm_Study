#include <bits/stdc++.h>
typedef long long ll;

ll getGCD(ll a, ll b)
{
    if(b == 0)
        return a;
    return getGCD(b, a%b);
}

int main(int argc, char* argv[])
{
    ll a, b;
    std::cin >> a >> b;

    int gcd = getGCD(a, b);
    for(int i = 0; i<gcd; i++)
        std::cout << "1";
    return 0;
}