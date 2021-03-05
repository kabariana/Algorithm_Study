#include <bits/stdc++.h>

int conv(int d, int h, int m)
{
    return d*24*60 + h*60 + m;
}

int main(int argc, char* argv[])
{
    int d, h, m;
    std::cin >> d >> h >> m;

    if(conv(d, h, m)<conv(11, 11, 11))
        std::cout << "-1";
    else
        std::cout << conv(d, h, m)-conv(11, 11, 11);
}