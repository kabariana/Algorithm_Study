#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, p;
    std::cin >> a >> p;

    std::cout << (a*7 == p*13 ? "lika" : a*7 > p*13 ? "Axel":"Petra");
    return 0;
}