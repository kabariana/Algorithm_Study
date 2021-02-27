#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        long long a, b;
        std::cin >> a >> b;
        std::cout << (a+b)*(a+b)*(a+b-1)/2 << '\n';
    }
    return 0;
}