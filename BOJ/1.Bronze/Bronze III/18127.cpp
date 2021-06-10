#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b;
    std::cin >> a>> b;
    std::cout << (1LL*(a-2)*b*(b+1)/2 + b + 1);
    return 0;
}