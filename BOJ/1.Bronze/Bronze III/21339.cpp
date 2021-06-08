#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, k, d, s;
    std::cin >> n >> k >> d >> s;
    double tmp = n*d-k*s, result = tmp / (n-k);

    std::cout << std::fixed << std::setprecision(6) << (result < 0 || result > 100 ? "impossible":std::to_string(result));
    return 0;
}