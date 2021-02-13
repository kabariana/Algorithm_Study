#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    double p, q;
    std::cin >> p >> q;

    if(q >= 30)
        std::cout << "Red";
    else if(q <= 10)
        std::cout << "White";
    else
        std::cout << "Yellow";
    return 0;
}