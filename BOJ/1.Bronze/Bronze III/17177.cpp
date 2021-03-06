#include <bits/stdc++.h>
#define epsilon 1e-5

int main(int argc, char* argv[])
{
    int a, b, c;
    double x;
    std::cin >> a >> b >> c;

    int p, q, r;
    p = a;
    q = 2*b*c;
    r = a*(c*c-a*a+b*b);
    int d = q*q - 4*p*r;
    if(d<0)
    {
        std::cout << "-1";
        return 0;
    }
    x = (-q + std::sqrt(d))/(2*p);
    if(x<0)
    {
        std::cout << "-1";
        return 0;
    }
    std::cout << (int)(x+epsilon);

}