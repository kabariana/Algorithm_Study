#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    ll a, b, c;
    std::cin >> a >> b >> c;

    for(int i = 0; i<c; i++)
        a^=b;
    std::cout << a;
    return 0;
}