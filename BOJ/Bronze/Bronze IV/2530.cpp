#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int h, m, s, t;
    std::cin >> h >> m >> s >> t;

    h += t/3600;
    t %= 3600;
    m += t/60;
    s += t%60;

    if(s >= 60)
    {
        m++;
        s%=60;
    }
    if(m >= 60)
    {
        h++;
        m%=60;
    }
    if(h >= 24)
        h%=24;
    std::cout << h << ' ' << m << ' ' << s;
}