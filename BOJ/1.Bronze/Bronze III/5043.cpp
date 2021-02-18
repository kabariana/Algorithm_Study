#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    long long n, b;
    std::cin >> n >> b;

    long long c = std::pow(2, b+1)-1;

    if(n <= c)
        std::cout << "yes";
    else
        std::cout << "no";
    return 0;
}