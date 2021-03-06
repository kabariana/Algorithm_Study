#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    ll sum = 0;
    for(ll i = 0; i<n*n; i++)
    {
        ll tmp;
        std::cin >> tmp;
        sum+=tmp;
    }
    std::cout << sum;
    return 0;
}