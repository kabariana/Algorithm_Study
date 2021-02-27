#include <bits/stdc++.h>

std::mt19937 rn(std::time(0));

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    for(int i = 0; i<814; i++)
    {
        std::cout << (int)(rn()%16281-8140) << " ";
        std::cout << (int)(rn()%16281-8140) << "\n";
    }
    return 0;
}