#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        int n, m, k, res;
        std::cin >> n >> m >> k;

        if(!n && !m && !k)
            break;

        res = n-k>n/2?std::max(n/2-m+1, 0):-1;
        std::cout << res << '\n';
    }
    return 0;
}