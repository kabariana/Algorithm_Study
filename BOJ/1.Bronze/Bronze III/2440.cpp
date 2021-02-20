#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j<n-i; j++)
            std::cout << "*";
        std::cout << '\n';
    }
    return 0;
}