#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-i-1; j++)
            std::cout << " ";
        for(int j = 0; j<2*i+1; j++)
            std::cout << "*";
        std::cout << '\n';
    }

    for(int i = 1; i<n; i++)
    {
        for(int j = 0; j<i; j++)
            std::cout << " ";
        for(int j = 0; j<2*(n-i)-1; j++)
            std::cout << "*";
        std::cout << '\n';
    }
    return 0;
}