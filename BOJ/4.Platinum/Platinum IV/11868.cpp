#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, x = 0;
    std::cin >> N;
    for(int i = 0; i<N; i++)
    {
        int p;
        std::cin >> p;
        x^=p;
    }
    if(x != 0)
        std::cout << "koosaga\n";
    else
        std::cout << "cubelover\n";
    return 0;
}