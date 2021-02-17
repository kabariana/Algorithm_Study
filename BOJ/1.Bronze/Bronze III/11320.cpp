#include <bits/stdc++.h>

int getGCD(int a, int b)
{
    if(b == 0)
        return a;
    return getGCD(b, a%b);
}

int main(int argc, char* argv[])
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int a, b;
        std::cin >> a >> b;
        int gcd = getGCD(a, b);
        a /= gcd;
        b /= gcd;
        std::cout << a*a / b*b <<'\n';
    }
    return 0;
}