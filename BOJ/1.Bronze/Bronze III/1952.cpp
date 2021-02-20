#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int m, n;
    std::cin >> m >> n;

    if(m > n)
        std::cout << 2*n-1;
    else
        std::cout << 2*m-2;
    return 0;
}