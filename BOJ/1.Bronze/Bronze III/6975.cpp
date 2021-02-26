#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int n, sum = 0;
        std::cin >> n;
        for(int i = 1; i<n; i++)
            if(n%i == 0)
                sum+=i;
        std::cout << n;
        if(n==sum)
            std::cout << " is a perfect number.\n";
        else
        {
            if(n>sum)
                std::cout << " is a deficient number.\n";
            else
                std::cout << " is an abundant number.\n";
        }
        std::cout << '\n';        
    }
    return 0;
}