#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int L, C, N;
    std::cin >> L >> C >> N;

    while(C--)
    {
        int S_i, P_i;
        std::cin >> S_i >> P_i;
        std::cout << S_i + std::abs(P_i - N) <<'\n';
    }
    return 0;
}