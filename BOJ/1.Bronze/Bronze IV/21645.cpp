#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m, k;
    std::cin >> n >> m >> k;

    long long res;

    if(m < k)
        res = n*m;
    else
        res = n*((k-1)+m/k);
    std::cout << res << '\n';
    return 0;
}