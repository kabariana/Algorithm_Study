#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    if(n % 2 == 1)
    {
        for(int i = 1; i<=(n-3)/2; i++)
            std::cout << "1 2 ";
        std::cout <<"1 2 3";
    }
    else
    {
        for(int i = 1; i<=n/2; i++)
            std::cout << "1 2 ";
    }
    return 0;
}