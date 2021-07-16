#include <bits/stdc++.h>

constexpr int size = 100 + 1;
int A[size];
int B[size];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, M;
    std::cin >> N >> M;

    for(int i = 0; i<N; i++)
    {
        std::cin >> A[i];
        B[A[i]-1]++;
    }
    std::sort(B, B + M);
    std::cout << B[M-1] << '\n';
    return 0;
}