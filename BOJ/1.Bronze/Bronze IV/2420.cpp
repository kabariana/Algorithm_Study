#include <bits/stdc++.h>
typedef long long int ll;

int main(int argc, char* argv[])
{
    ll a, b, result;
    std::cin >> a >> b;
    if(a > b)
        result = a - b;
    else
        result = b - a;
    std::cout << result;
    return 0;
}