#include <bits/stdc++.h>

int getGCD(int a, int b)
{
    if(b==0) return a;
    return getGCD(b, a%b);
}

int main(int argc, char* argv[])
{
    int n, m;
    std::cin >> n >> m;

    std::cout << m - getGCD(n, m);
    return 0;
}