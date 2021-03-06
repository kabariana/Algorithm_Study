#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    while(n--)
    {
        std::cout << std::fixed<< std::setprecision(9);
        double p, c, o;
        std::cin >> p >> c;

        o = (100*p)/(100+c);
        std::cout << o << '\n';
    }
    return 0;
}