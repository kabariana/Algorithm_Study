#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    ll a, b;
    std::cin >> a >> b;
    if(a%2==0 || b%2 == 0)
        std::cout << "0";
    else
        std::cout << std::min(a, b);
    return 0;
}