#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if(a > b)
        std::swap(a, b);
    if(b > c)
        std::swap(b, c);
    if(a > b)
        std::swap(a, b);

    std::cout << a << ' ' << b << ' ' << c;
    return 0;
}