#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, c, d, tmp;
    std::cin >> a >> b >> c >> d;

    if((a+b+c+d)%2)
        std::cout << "white";
    else
        std::cout << "black";
    return 0;
}