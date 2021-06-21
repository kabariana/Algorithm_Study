#include <bits/stdc++.h>

int func(unsigned long long x)
{
    int res = 0;
    while(x > 0)
    {
        res += (x&1);
        x >>= 1;
    }
    return res;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    unsigned long long n;
    std::cin >> n;

    std::cout << func(n) <<'\n';
    return 0;
}