#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int R;
    std::string S;
    std::cout << std::fixed << std::setprecision(3);
    while(std::cin >> R >> S)
    {
        double tmp = std::stod("0" + S);
        std::cout << (int)std::round(std::sqrt((R*(tmp+0.16))/0.067)) << '\n';
    }
    return 0;
}