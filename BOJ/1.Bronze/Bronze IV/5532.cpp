#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int l, a, b, c, d;
    int kT, mT, result;
    std::cin >> l >> a >> b >> c >> d;

    kT = (a+c-1)/c;
    mT = (b+d-1)/d;

    result = (kT>mT)? l-kT:l-mT;
    std::cout << result;
}