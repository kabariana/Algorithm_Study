#include <bits/stdc++.h>

typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    ll n;
    std::cin >> n;

    int cnt = 0;
    for(ll i = 1; i*i <= n; i++)
        cnt++;
    std::cout << cnt <<'\n';
    return 0;
}