#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;
    int determinent = a*e - b*d;
    std::cout << (e*c - b*f)/determinent << ' ' << (a*f-c*d)/determinent <<'\n';
    return 0;
}