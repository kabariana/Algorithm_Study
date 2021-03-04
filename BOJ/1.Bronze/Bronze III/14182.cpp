#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        int n;
        std::cin >> n;

        if(!n)
            break;

        if(n<=1000000)
            std::cout << n << '\n';
        else if(n <=5000000)
            std::cout << int(n*(0.9)) << '\n';
        else
            std::cout << int(n*(0.8)) << '\n';
    }
}