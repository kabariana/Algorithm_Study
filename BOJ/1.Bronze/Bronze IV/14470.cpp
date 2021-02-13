#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, c, d, e, cnt;
    std::cin >> a >> b >> c >> d >> e;

    if(a<0)
        cnt = -1*a*c + d + e*b;
    else
        cnt = e*(b-a);
    std::cout << cnt;
    return 0;
}