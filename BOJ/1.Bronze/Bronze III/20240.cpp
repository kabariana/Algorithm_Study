#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    for(int i = 0; i*i<=n; i++)
    {
        for(int j = 0; j*j<=n; j++)
        {
            if(i*i + j*j == n)
            {
                std::cout << 0 << " " << 0 << '\n';
                std::cout << i << " " << j << '\n';
                std::cout << -j << " " << i << '\n';
                std::cout << i - j << " " << i + j << '\n';
                return 0;
            }
        }
    }
    std::cout << "Impossible";
    return 0;
}