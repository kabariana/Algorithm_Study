#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        double A, B;
        std::cin >> A >> B;
        std::cout << std::fixed << std::setprecision(0) << (A*A/2)/(B*B/2)<<'\n';
    }
    return 0;
}