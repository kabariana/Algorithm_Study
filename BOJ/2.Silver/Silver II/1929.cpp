#include <bits/stdc++.h>

bool sieve[1000001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int m, n;
    std::cin >> m >> n;

    for(int i= m; i<=n; i++)
        sieve[i] = true;
    sieve[1] = false;
    for(int i = 2; i<=std::sqrt(n); i++)
        for(int j = i + i; j <= n; j+=i)
            sieve[j] = false;
    
    for(int i= m; i<=n; i++)
        if(sieve[i])
            std::cout << i <<'\n';

    return 0;
}