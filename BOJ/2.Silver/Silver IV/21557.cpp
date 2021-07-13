#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    std::vector<int> v(N);
    for(int i = 1; i<=N; i++)
        std::cin >> v[i];

    for(int i = 1; i<N-2; i++)
        if(v[1] > v[N])
            v[1]--;
        else
            v[N]--;
    std::cout << std::max(v[1], v[N]) - 1 << '\n';
    return 0;
}