#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<int> v(n);
    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    ll tmp = v[0];
    for(int i = 1; i<n; i++)
        tmp = (tmp%m)*(v[i]%m);
    std::cout << tmp%m;
    return 0;
}