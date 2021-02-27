#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, k;
    std::cin >> n >> k;

    int sum = 0, t = 1;
    for(int i = 0; i<=k; i++)
    {
        sum+=n*t;
        t*=10;
    }
    std::cout << sum;
    return 0;
}