#include <bits/stdc++.h>
using ll = long long;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    ll sum = 0;
    for(int i = 0; i < n; i++)
        for(int j = i; j<n; j++)
            sum += std::abs(v[i]-v[j])*2;
    std::cout << sum <<'\n';
    return 0;
}