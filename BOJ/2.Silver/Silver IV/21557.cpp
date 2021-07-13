#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;
    std::vector<int> v(N);
    
    for(int i = 0; i<N; i++)
        std::cin >> v[i];

    for(int i = 0; i < N-3; i++)
        if(v[0] > v[N-1])
            v[0]--;
        else
            v[N-1]--;
    std::cout << std::max(v[0], v[N-1]) - 1 << '\n';
    return 0;
}