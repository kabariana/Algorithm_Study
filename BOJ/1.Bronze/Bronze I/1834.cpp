#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    long long n, sum = 0;
    std::cin >> n;

    for(long long i = 1; i < n; i++)
        sum+=(n+1)*i;
    std::cout << sum;
    return 0;
}