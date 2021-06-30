// 게임 이론
#include <bits/stdc++.h>
using ll = long long;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    ll N;
    std::cin >> N;

    if(N % 7 == 0 || N % 7 == 2)
        std::cout << "CY\n";
    else
        std::cout << "SK\n";
    return 0;
}