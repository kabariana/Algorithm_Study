#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m, i;
    std::cin >> n >> m;

    for(i = 0; i<m; i++)
        std::cout << 0 << " " << i + 1 << '\n';
    for(int j = 0; j < n-m; j++)
        std::cout << i++ << " " << i <<'\n';
    return 0;
}