#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int h, m, res;
    std::cin >> h >> m;

    if(m < 45)
    {
        res = 45-m;
        m = 60 - res;
        h--;
        if(h < 0)
            h = 23;
    }
    else if(m >= 45)
        m-=45;
    std::cout << h << ' ' << m;
    return 0;
}