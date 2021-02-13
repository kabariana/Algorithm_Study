#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        if(i%2 == 0)
        {
            for(int i = 0; i<n; i++)
                std::cout << "* ";
            std::cout << '\n';
        }
        else
        {
            for(int i = 0; i<n; i++)
                std::cout << " *";
            std::cout << '\n';
        }
    }
    return 0;
}