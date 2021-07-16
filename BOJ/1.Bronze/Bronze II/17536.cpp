#include <bits/stdc++.h>
using ll = long long;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    ll V, N;
    std::cin >> V >> N;
    for(ll i = 10; i<=90; i+=10)
        std::cout << V * N * i / 100 + bool(V * N * i % 100) << ' ';
    std::cout << '\n';
    return 0; 
}