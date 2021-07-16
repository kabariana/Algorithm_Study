#include <bits/stdc++.h>
using ll = long long;
using ld = long double;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    ld N, tmp = 1;
    std::cin >> N;

    int size = std::to_string((ll)N).length();
    for(int i = 1; i <= size -1; i++)
        tmp *= 10;
    std::cout << std::fixed << std::setprecision(0) << std::round(N/tmp)*tmp <<'\n';
    return 0;
}