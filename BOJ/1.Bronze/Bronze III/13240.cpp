#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int x, y;
    std::cin >> x >> y;
    for(int i = 0; i<x; i++)
    {
        for(int j = 0; j<y; j++)
        {
            if((i+j)%2==0)
                std::cout << "*";
            else
                std::cout << ".";
        }
        std::cout << '\n';
    }
    return 0;
}