#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j <= n-i; j++)
            std::cout << " ";
        if(i == 1 || i == n)
            for(int j = 1; j<=(i-1)*2+1; j++)
                std::cout << "*";
        else
        {
            std::cout << "*";
            for(int j = 1; j<=(i-1)*2-1; j++)
                std::cout << "*";
            std::cout << "*";
        }
        std::cout << '\n';
    }
    return 0;
}