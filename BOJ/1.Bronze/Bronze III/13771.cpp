#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<double> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    std::sort(v.begin(), v.end());

    std::cout << std::fixed << std::setprecision(2) << v[1];
    return 0;
}