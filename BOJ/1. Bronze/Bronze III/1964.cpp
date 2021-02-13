#include <bits/stdc++.h>
#define MOD 45678
typedef long long ll;

int main(int argc, char* argv[])
{
    ll n, result;
    std::cin >> n;

    std::cout << (1 + 4 * n + 3 * n * (n-1) / 2) % MOD;
    return 0;
}