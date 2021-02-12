#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int T;
    std::cin >> T;

    while(T--)
    {
        long long int n, ret;
        std::cin >> n;

        ret = n*n;

        std::cout << ret << '\n';
    }
    return 0;
}