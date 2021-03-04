#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    ll a, b, price;
    std::cin >> a >> b >> price;

    if(a+b < price * 2)
        std::cout << a + b;
    else
        std::cout << a+b-2*price;
    return 0;
}