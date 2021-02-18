#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int P;
    std::cin >> P;

    while(P--)
    {
        int k, n;
        std::cin >> k >> n;
        std::cout << k << ' ' << n*(n+3)/2 <<'\n';
    }
    return 0;
}