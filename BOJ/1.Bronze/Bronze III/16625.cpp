#include <bits/stdc++.h>

int GetGCD(int a, int b)
{
    if(b==0)
        return a;
    return GetGCD(b, a%b);
}

int main(int argc, char* argv[])
{
    int x, y, z;
    std::cin >> x >> y >> z;

    int gcd = GetGCD(x, y);
    if(x*y/gcd>z)
        std::cout << "no";
    else
        std::cout << "yes";
    return 0;
}