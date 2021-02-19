#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, d, k;
    std::cin >> a >> d >> k;

    if((k-a)%d||(k-a)/d<0)
        std::cout << "X";
    else
        std::cout << (k-a)/d + 1;
    return 0;
}