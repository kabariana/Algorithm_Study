#include <bits/stdc++.h>
using ll = long long;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    ll N, P, res = 1;
    std::cin >> N >> P;

    for(int i = 1; i<= N; i++)
        res = (res * i) % P;
    std::cout << res << '\n';
    return 0;
}