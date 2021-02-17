#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int v, e;
        std::cin >> v >> e;

        std::cout << 2-v+e << '\n';
    }
    return 0;
}