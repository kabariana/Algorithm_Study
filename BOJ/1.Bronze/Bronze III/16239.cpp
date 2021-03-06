#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int k, n;
    std::cin >> k >> n;
    for(int i = 0; i<n-1; i++)
        std::cout << i + 1 << '\n';
    std::cout << k - (n*(n-1)/2);
    return 0;
}