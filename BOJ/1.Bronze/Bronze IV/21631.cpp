#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    long long a, b;
    std::cin >> a>> b;
    std::cout << (a <= b-1 ? a+1:b);
    return 0;
}