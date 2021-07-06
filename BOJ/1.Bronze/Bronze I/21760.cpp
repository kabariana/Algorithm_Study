#include <bits/stdc++.h>

int sum(int n)
{
    return (n*(n-1))/2;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC;
    std::cin >> TC;

    while(TC--)
    {
        int N, M, k, D;
        std::cin >> N >> M >> k >> D;
        int tmp = sum(M) * k * N + (sum(N*M) - N * sum(M));
        if(tmp > D)
            std::cout << -1 <<'\n';
        else
            std::cout <<(D/tmp)*tmp << '\n';
    }
    return 0;
}