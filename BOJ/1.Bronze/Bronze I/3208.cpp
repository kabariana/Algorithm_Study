#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int M, N;
    std::cin >> M >> N;

    if(M > N)
        std::cout << (N - 1) * 2 + 1 << '\n';
    else
        std::cout << (M - 1) * 2 << '\n';
    return 0;
}