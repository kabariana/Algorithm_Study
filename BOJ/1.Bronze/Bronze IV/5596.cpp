#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int s, t;
    int tmp, maxv;
    s = t = 0;

    for(int i = 0; i<4; i++)
    {
        std::cin >> tmp;
        s+=tmp;
    }
    for(int i = 0; i<4; i++)
    {
        std::cin >> tmp;
        t+=tmp;
    }
    maxv = std::max(s, t);
    std::cout << maxv;
    return 0;
}