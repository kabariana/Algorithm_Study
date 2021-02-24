#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    
    ll n;

    while(std::cin >> n && n)
    {
        ll sum = 0;
        for(ll i = 1; i<n; i++)
            if(n%i == 0)
                sum+=i;
        std::cout << n << ' ';
        if(n==sum)
            std::cout << "PERFECT\n";
        else
        {
            if(n<sum)
                std::cout << "ABUNDANT\n";
            else
                std::cout << "DEFICIENT\n";
        }    
    
    }
    return 0;
}