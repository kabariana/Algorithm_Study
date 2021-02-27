#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        int n;
        std::cin >> n;

        if(n==0)
            break;

        for(int i = 1; i<=n; i++)
        {
            for(int j = 0; j<i; j++)
                std::cout << "*";
            std::cout << "\n";
        }
    }
    return 0;
}