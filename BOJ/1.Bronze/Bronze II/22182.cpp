#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, r;
    std::cin >> n >> r;

    std::vector<int> v(n);

    double sum = 0;
    for(int i = 0; i<n; i++)
    {
        std::cin >> v[i];
        sum += v[i];
    }

    for(int i = 0; i<n; i++)
        std::cout << std::fixed << std::setprecision(9) << M_PI * r * r * v[i] / sum << '\n';
    return 0;
}