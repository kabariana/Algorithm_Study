#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b;
    int r1, r2, r3, fin;
    std::cin >> a >> b;

    r1 = a*((b%100)%10);
    r2 = a*((b%100)/10);
    r3 = a*(b/100);
    fin = a*b;

    std::cout << r1 << '\n';
    std::cout << r2 << '\n';
    std::cout << r3 << '\n';
    std::cout << fin;
    return 0;
}