#include <bits/stdc++.h>

int getGCD(int a, int b)
{
    if(b == 0) return a;
    else return getGCD(b, a%b);
}

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int a, b;
        std::cin >> a >> b;

        if(a>b)
            std::swap(a, b);

        int gcd = getGCD(a, b);
        
        std::cout << a*b/gcd << ' ' << gcd << '\n';
    }
    return 0;
}