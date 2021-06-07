#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    double a, b;
    while(std::cin >> a >> b)
    {
        if(!a && !b)
            break;
        std::cout << std::fixed << std::setprecision(3) << std::sqrt(1-(b/a)*(b/a)) << '\n';
    }
    return 0;
}