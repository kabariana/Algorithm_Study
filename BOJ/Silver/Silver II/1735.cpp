#include <bits/stdc++.h>

int getGCD(int a, int b)
{
    if(b == 0)
        return a;
    return getGCD(b, a%b);
}

int main(int argc, char* argv[])
{
    int a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;

    int up = a1*b2 + a2*b1;
    int down = b1*b2;

    int mod = getGCD(up, down);

    up/=mod;
    down/=mod;

    std::cout << up << ' ' << down;
    return 0;
}