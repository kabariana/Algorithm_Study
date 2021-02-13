#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int h, m, t;
    std::cin >> h >> m >> t;

    h += t/60;
    m += t%60;

    if(m >= 60)
    {
        h++;
        m%=60;
    }
    if(h >= 24)
        h %=24;
    std::cout << h << ' ' << m;
    return 0;
}