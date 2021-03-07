#include <bits/stdc++.h>
typedef long long ll;

ll a, b, c;

ll func(ll a, ll b)
{
    if(b == 0)
        return 1;
    else if(b == 1)
        return a;
    if(b%2>0)
        return a * func(a, b-1);
    ll tmp = func(a, b/2);
    tmp %= c;
    return (tmp*tmp)%c;    
}


int main(int argc, char* argv[])
{
    std::cin >> a >> b >> c;
    std::cout << func(a, b)%c;
    return 0;
}